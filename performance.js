//Prueba usando node
const outerIterations = 10000;
const innerIterations = 100000;

let result = 0;

console.log("Iniciando 1,000 millones de iteraciones con bucles anidados...");

const startTime = process.hrtime.bigint();

for (let i = 0; i < outerIterations; i++) {
  for (let j = 0; j < innerIterations; j++) {
    result += 1; 
  }
}

const endTime = process.hrtime.bigint();

const executionTimeSeconds = Number(endTime - startTime) / 1_000_000_000;

console.log(`\nResultado final (total de incrementos): ${result}`);
console.log(`Total de iteraciones: ${outerIterations * innerIterations} (1,000 millones)`);
console.log(`Ejecución completada en ${executionTimeSeconds.toFixed(2)} segundos`);
