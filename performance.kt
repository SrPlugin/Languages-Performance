fun main() {
    val outerIterations = 10000
    val innerIterations = 100000
    var result: Long = 0

    println("Iniciando 1,000 millones de iteraciones con bucles anidados...")

    val startTime = System.nanoTime()

    for (i in 0 until outerIterations) {
        for (j in 0 until innerIterations) {
            result++
        }
    }

    val endTime = System.nanoTime()
    val executionTimeSeconds = (endTime - startTime) / 1_000_000_000.0

    println("\nResultado final: $result")
    println("Tiempo de ejecución: %.2f segundos".format(executionTimeSeconds))
}
