import csv

titulo = input('Título:').strip().upper()
with open('dados.csv', 'r') as file:
  ler = csv.DictReader(file)
  contador = 0
  for linha in ler:
    if linha['Título'].strip().upper() == titulo:
      contador += 1

print(contador)
