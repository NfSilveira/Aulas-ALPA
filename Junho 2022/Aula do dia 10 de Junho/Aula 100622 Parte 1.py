num = int(input("Digite um número: "))
i = num
fat = num

while (i - 1 > 0):
  fat *= i - 1
  i -= 1

print(f"O fatorial de {num} é {fat}.")
