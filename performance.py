#Prueba usando python
import time

outer_iterations = 10000
inner_iterations = 100000

result = 0

print("Iniciando 1,000 millones de iteraciones con bucles anidados...")

start_time = time.perf_counter()

for i in range(outer_iterations):
    for j in range(inner_iterations):
        result += 1 

end_time = time.perf_counter()

execution_time_seconds = end_time - start_time

print(f"\nResultado final (total de incrementos): {result}")
print(f"Total de iteraciones: {outer_iterations * inner_iterations} (1,000 millones)")
print(f"Ejecución completada en {execution_time_seconds:.2f} segundos")