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


---

## Mis resultados

| Lenguaje / Runtime | Tiempo de ejecución (s) |
|-------------------|------------------------|
| Node.js + JS      | 0.60                   |
| Bun + TS          | 0.40                   |
| Python            | 48.57                  |
| Java              | 0.10                   |
| C                 | 1.3             |
| C++               | No probado             |
| C#                | No probado             |
| Dart              | No probado             |
| Go                | 0.17                   |
| Kotlin            | 0.02                   |
| Rust              | No probado             |
| Swift             | No probado             |

---

## Observaciones

- Python es mucho más lento porque es un lenguaje interpretado puro.  
- Java y otros lenguajes en JVM se benefician del JIT y optimizan loops muy bien.  
- Node.js sorprende por su rapidez gracias a V8, pero Bun es aún más rápido en este benchmark.  
- Los lenguajes compilados a código nativo (C++, Rust, Swift) usualmente ofrecen el mejor rendimiento.

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
swiftc -O performance.swift -o performance
./performance
```