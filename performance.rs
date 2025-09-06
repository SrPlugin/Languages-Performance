use std::time::Instant;

fn main() {
    let outer_iterations = 10_000;
    let inner_iterations = 100_000;
    let mut result: u64 = 0;

    println!("Iniciando 1,000 millones de iteraciones con bucles anidados...");

    let start = Instant::now();

    for _ in 0..outer_iterations {
        for _ in 0..inner_iterations {
            result += 1;
        }
    }

    let duration = start.elapsed().as_secs_f64();

    println!("\nResultado final: {}", result);
    println!("Tiempo de ejecución: {:.2} segundos", duration);
}
