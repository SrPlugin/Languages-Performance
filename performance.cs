using System;
using System.Diagnostics;

class Program
{
    static void Main()
    {
        int outerIterations = 10000;
        int innerIterations = 100000;
        long result = 0;

        Console.WriteLine("Iniciando 1,000 millones de iteraciones con bucles anidados...");

        Stopwatch stopwatch = Stopwatch.StartNew();

        for (int i = 0; i < outerIterations; i++)
        {
            for (int j = 0; j < innerIterations; j++)
            {
                result++;
            }
        }

        stopwatch.Stop();

        Console.WriteLine($"\nResultado final: {result}");
        Console.WriteLine($"Tiempo de ejecución: {stopwatch.Elapsed.TotalSeconds:F2} segundos");
    }
}
