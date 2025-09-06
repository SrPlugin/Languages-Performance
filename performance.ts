//Prueba usando bun

const outerIterations: number = 10000;
const innerIterations: number = 100000;

let result: number = 0;

console.log("Iniciando 1,000 millones de iteraciones con bucles anidados...");

const startTime = performance.now();

for (let i = 0; i < outerIterations; i++) {
  for (let j = 0; j < innerIterations; j++) {
    result += 1;
  }
}

const endTime = performance.now();
const executionTimeSeconds: number = (endTime - startTime) / 1000;

console.log(`\nResultado final (total de incrementos): ${result}`);
console.log(`Total de iteraciones: ${outerIterations * innerIterations} (1,000 millones)`);
console.log(`Ejecución completada en ${executionTimeSeconds.toFixed(2)} segundos`);
