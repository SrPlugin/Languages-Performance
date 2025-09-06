import Foundation

let outerIterations = 10000
let innerIterations = 100000
var result: Int = 0

print("Iniciando 1,000 millones de iteraciones con bucles anidados...")

let startTime = CFAbsoluteTimeGetCurrent()

for _ in 0..<outerIterations {
    for _ in 0..<innerIterations {
        result += 1
    }
}

let endTime = CFAbsoluteTimeGetCurrent()
let executionTime = endTime - startTime

print("\nResultado final: \(result)")
print("Tiempo de ejecución: \(String(format: "%.2f", executionTime)) segundos")
