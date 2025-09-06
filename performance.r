outer <- 10000
inner <- 100000
result <- 0

cat("Iniciando 1,000 millones de iteraciones...\n")
start_time <- Sys.time()

for (i in 1:outer) {
  for (j in 1:inner) {
    result <- result + 1
  }
}

end_time <- Sys.time()
cat("\nResultado final:", result, "\n")
cat("Ejecución completada en", end_time - start_time, "segundos\n")
