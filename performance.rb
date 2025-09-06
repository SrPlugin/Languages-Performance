outer = 10000
inner = 100000
result = 0

puts "Iniciando 1,000 millones de iteraciones..."
start_time = Time.now

outer.times do
  inner.times do
    result += 1
  end
end

end_time = Time.now
puts "\nResultado final: #{result}"
puts "Ejecución completada en #{end_time - start_time} segundos"
