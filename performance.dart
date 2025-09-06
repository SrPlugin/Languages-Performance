import 'dart:core';
import 'dart:io';

void main() {
  const outerIterations = 10000;
  const innerIterations = 100000;
  int result = 0;

  print("Iniciando 1,000 millones de iteraciones con bucles anidados...");

  final startTime = DateTime.now();

  for (int i = 0; i < outerIterations; i++) {
    for (int j = 0; j < innerIterations; j++) {
      result++;
    }
  }

  final endTime = DateTime.now();
  final executionTime = endTime.difference(startTime).inMilliseconds / 1000;

  print("\nResultado final: $result");
  print("Tiempo de ejecución: ${executionTime.toStringAsFixed(2)} segundos");
}
