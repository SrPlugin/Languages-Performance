use std::time::Instant;

fn sieve(n: usize) -> Vec<usize> {
    let mut is_prime = vec![true; n + 1];
    is_prime[0] = false;
    is_prime[1] = false;

    for i in 2..=((n as f64).sqrt() as usize) {
        if is_prime[i] {
            for j in ((i * i)..=n).step_by(i) {
                is_prime[j] = false;
            }
        }
    }

    is_prime.iter().enumerate()
            .filter_map(|(i, &prime)| if prime { Some(i) } else { None })
            .collect()
}

fn main() {
    let iterations = 1_000_000;

    println!("Iniciando");

    let start = Instant::now();

    let primes = sieve(iterations);

    let duration = start.elapsed().as_secs_f64();

    println!("Se generaron {} primos hasta la iteración {}", primes.len(), iterations);
    println!("Tiempo de ejecución: {:.2} segundos", duration);
}
