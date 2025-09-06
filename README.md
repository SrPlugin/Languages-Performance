# Benchmark de 1,000 Millones de Iteraciones con Bucles Anidados

Este proyecto realiza un **benchmark simple** que ejecuta **1,000 millones de iteraciones** utilizando bucles anidados en diferentes lenguajes de programación.  
El objetivo es comparar la **performance de distintos lenguajes y runtimes** en tareas CPU-bound (cálculos intensivos con loops simples).

---

## Lenguajes incluidos

- C++ (`cpp`)  
- C# (`cs`)  
- Dart (`dart`)  
- Go (`go`)  
- Java (`java`)  
- JavaScript (`js`) (ejecutado en Node) 
- Kotlin (`kt`)  
- Python (`py`)  
- Rust (`rs`)  
- Swift (`swift`)  
- TypeScript (`ts`) (ejecutado en Bun)
- Ruby(`rb`)  
- R(`r`) 
- C(`c`)   


---

## Mis resultados

| Lenguaje / Runtime | Tiempo de ejecución (s) |
|-------------------|------------------------|
| Node.js + JS      | 0.60                   |
| Bun + TS          | 0.40                   |
| Python            | 48.57                  |
| Java              | 0.10                   |
| C                 | 1.30                   |
| C++               | 0.87                   |
| C#                | 0.94                   |
| Dart              | 1.14                   |
| Go                | 0.17                   |
| Kotlin            | 0.02                   |
| Rust              | 4.93                   |
| Swift             | 14.52                  |
| R                 | 20.62                  |
| Ruby              | 46.85                  |

---

## Observaciones

1. **Lenguajes compilados a código nativo son los más rápidos**  
   - Kotlin (0.02 s), Go (0.17 s) y Java (0.10 s) se llevan los tiempos más bajos, porque la compilación a bytecode optimizado (JVM) o código nativo permite un rendimiento excelente en loops intensivos.  
   - C y C++ también son muy rápidos (1.30 s y 0.87 s), aunque en este caso los tiempos dependen de las optimizaciones del compilador (`-O3`).  

2. **Lenguajes interpretados son más lentos**  
   - Python (48.57 s) y Ruby (46.85 s) muestran que los lenguajes interpretados puros no manejan tan bien loops grandes y cálculos intensivos.  
   - R (20.62 s) también es lento, aunque un poco mejor que Python, probablemente por su optimización interna para operaciones vectoriales, pero no para loops puros.  

3. **JavaScript y TypeScript**  
   - Node.js (0.60 s) y Bun (0.40 s) demuestran la eficiencia de los motores modernos (V8 para Node y Bun runtime), incluso en tareas CPU-bound.  
   - Bun es más rápido que Node.js en este benchmark, lo que coincide con sus optimizaciones recientes.  

4. **Lenguajes modernos y optimizados**  
   - Dart (1.14 s) y Rust (4.93 s) muestran buenas velocidades; Rust es más lento que C++ en este caso, probablemente por la seguridad de memoria y verificaciones en tiempo de compilación.  
   - Swift (14.52 s) es relativamente lento en este benchmark, lo cual puede ser por cómo su runtime maneja scripts vs binarios compilados.  

5. **Comparativa interesante**  
   - Kotlin y Go sorprenden como los más rápidos, incluso más que C++, lo que demuestra lo bien optimizados que están sus compiladores para operaciones intensivas.  
   - Lenguajes interpretados como Python, Ruby y R muestran la gran diferencia de rendimiento frente a compilados o JIT optimizados.
---

## Cómo usar este benchmark

### Node.js / JavaScript
```bash
node performance.js
```

### Bun / TypeScript
```bash
bun run performance.ts
```


### Python 
```bash
python performance.py
```

### Java
```bash
javac performance.java
java performance
```

### C
```bash
tcc -run archivo.c
```

### C++
```bash
g++ -O3 performance.cpp -o performance
./performance
```

### C#
```bash
csc performance.cs
./performance.exe
```

### Dart
```bash
dart run performance.dart
```

### Go
```bash
go run performance.go
```

### Kotlin
```bash
kotlinc performance.kt -include-runtime -d performance.jar
java -jar performance.jar
```

### Rust
```bash
rustc performance.rs -O
./performance
```

### Swift
```bash
swift performance.swift
```

### R
```bash
Rscript performance.R
```

### Ruby
```bash
ruby performance.rb
```
