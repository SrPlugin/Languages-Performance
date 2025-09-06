public class BillionIterations {
    public static void main(String[] args) {
        int outerIterations = 10000;
        int innerIterations = 100000;
        long result = 0;

        System.out.println("Iniciando 1,000 millones de iteraciones con bucles anidados...");

        long startTime = System.nanoTime();

        for (int i = 0; i < outerIterations; i++) {
            for (int j = 0; j < innerIterations; j++) {
                result += 1;
            }
        }

        long endTime = System.nanoTime();
        double executionTimeSeconds = (endTime - startTime) / 1_000_000_000.0;

        System.out.println("\nResultado final (total de incrementos): " + result);
        System.out.println("Total de iteraciones: " + ((long) outerIterations * innerIterations) + " (1,000 millones)");
        System.out.printf("Ejecución completada en %.2f segundos%n", executionTimeSeconds);
    }
}
