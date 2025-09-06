package main

import (
    "fmt"
    "time"
)

func main() {
    outerIterations := 10000
    innerIterations := 100000
    result := 0

    fmt.Println("Iniciando 1,000 millones de iteraciones con bucles anidados...")

    start := time.Now()

    for i := 0; i < outerIterations; i++ {
        for j := 0; j < innerIterations; j++ {
            result++
        }
    }

    duration := time.Since(start).Seconds()

    fmt.Printf("\nResultado final: %d\n", result)
    fmt.Printf("Tiempo de ejecución: %.2f segundos\n", duration)
}
