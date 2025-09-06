#include <iostream>
#include <chrono>

int main() {
    long long result = 0;
    int outerIterations = 10000;
    int innerIterations = 100000;

    std::cout << "Iniciando 1,000 millones de iteraciones con bucles anidados...\n";

    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < outerIterations; i++) {
        for (int j = 0; j < innerIterations; j++) {
            result++;
        }
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    std::cout << "\nResultado final: " << result << std::endl;
    std::cout << "Tiempo de ejecución: " << elapsed.count() << " segundos" << std::endl;

    return 0;
}
