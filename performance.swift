import Foundation

let outerIterations = 10000
let innerIterations = 100000
var result = 0

print("Iniciando 1,000 millones de iteraciones con bucles anidados...")

let startTime = Date() // Inicio del timer

for _ in 0..<outerIterations {
    for _ in 0..<innerIterations {
        result += 1
    }
}

let endTime = Date() // Fin del timer
let executionTime = endTime.timeIntervalSince(startTime) // Diferencia en segundos

print("\nResultado final: \(result)")
print("Tiempo de ejecución: \(executionTime) segundos")
