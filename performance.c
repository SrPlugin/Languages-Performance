/* Simple file for measuring how much time a specific piece of code takes to
   execute, for optimization. */

/*
 * modified by elisiei (github.com/elisiei), original by drummyfish
 * (www.tastyfish.cz)
 *
 * this code has been modified to match this repo's criteria.
 * */

#include <stdint.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define METHOD_CLOCK                                                           \
    1 /// stdlib clock from time.h, approximate time used only by the program
#define METHOD_RDTSC                                                           \
    2 /// non-standard rdtsc instruction from intrin.h, number of CPU cycles,
      /// but can without precise definition
#define METHOD_CLOCK_POSIX                                                     \
    3 /// POSIX clock, measures nanoseconds used only by the program

#ifndef TIME_MEASURE_METHOD
#define TIME_MEASURE_METHOD METHOD_CLOCK_POSIX
#endif

#ifndef TIME_MEASURE_ITERATIONS
#define TIME_MEASURE_ITERATIONS 10000
#endif

#ifndef TIME_MEASURE_INNER_ITERATIONS
#define TIME_MEASURE_INNER_ITERATIONS 100000
#endif

static inline void measureStart();
static inline void measureEnd();

double timeTicks = 0.0;
double timeSecs = 0.0;

#if TIME_MEASURE_METHOD == METHOD_CLOCK_POSIX
#include <sys/types.h>

pid_t pid;
clockid_t clockId;
struct timespec t0, t1;

void measureStart()
{
    pid = getpid();
    clock_getcpuclockid(pid, &clockId);
    clock_gettime(clockId, &t0);
}

void measureEnd()
{
    clock_gettime(clockId, &t1);

    timeSecs = (double)((((uint32_t)t1.tv_sec) + t1.tv_nsec / 1000000000.0) -
                        (((uint32_t)t0.tv_sec) + t0.tv_nsec / 1000000000.0));
};

#elif TIME_MEASURE_METHOD == METHOD_RDTSC
#include <x86intrin.h>

uint64_t t0;

void measureStart() { t0 = __rdtsc(); }

void measureEnd() { timeTicks = (double)(__rdtsc() - t0); };

#else // CLOCK and others (default)
#include <time.h>

clock_t t0;

void measureStart() { t0 = clock(); }

void measureEnd()
{
    timeTicks = (double)(clock() - t0);
    timeSecs = timeTicks / CLOCKS_PER_SEC;
};
#endif

int main(void)
{
    measureStart();

    long long int number;

    printf("mesuring using method %d, %d outer iterations and %d inner "
           "iterations...\n",
           TIME_MEASURE_METHOD, TIME_MEASURE_ITERATIONS,
           TIME_MEASURE_INNER_ITERATIONS);

    for (uint32_t i = TIME_MEASURE_ITERATIONS; i != 0; --i)
    {
        // measured code begin
        // -------------------------------------------------------

        for (int j = 0; j < TIME_MEASURE_INNER_ITERATIONS; j++)
        {
            number++;
        }

        // measured code end
        // ---------------------------------------------------------
    }

    measureEnd();

    printf("finals number: %lld\n", number);
    printf("time mesaured:\n  %.20f ticks total\n  %20f ticks/iteration\n  "
           "%.20f secs total\n  %.20f secs/iteration\n",
           timeTicks, timeTicks / TIME_MEASURE_ITERATIONS, timeSecs,
           timeSecs / TIME_MEASURE_ITERATIONS);

    return 0;
}
