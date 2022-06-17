while True:
  F = float(input("Graus F: "))
  C = (F-32) * 5/9
  
  if F < -459.67:
    break
    
  print(f"{F} em Graus Celsius é igual a {C}.")
