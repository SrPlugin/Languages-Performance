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
| Rust              | 0.00                   |
| Swift             | 14.52                  |
| R                 | 20.62                  |
| Ruby              | 46.85                  |

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
---

