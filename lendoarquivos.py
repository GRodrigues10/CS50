import csv

#EXEMPLO 1:

"""file = open('arquivo.csv', 'r') 
ler = csv.reader(file)
next(ler)#ignora o cabeçalho
for linha in ler:
  print(linha[0])"""

#EXEMPLO 2:

"""titulos = set()#Elimina valores duplicados.


with open('arquivo.csv', 'r') as file:#Abre e fecha o arquivo automaticamente.

  ler = csv.DictReader(file)
  
  for linha in ler:
    titulos.add(linha['Título'].upper().strip())

  for titulo in sorted(titulos):#Ordenando
    print(titulo)"""


  
#EXEMPLO 3:

titulos = dict()#Elimina valores duplicados.


with open('arquivo.csv', 'r') as file:#Abre e fecha o arquivo automaticamente.

  ler = csv.DictReader(file)

  for linha in ler:
    titulo = linha['Título'].upper().strip()
    if titulo in titulos:
      titulos[titulo] += 1
    else:
      titulos[titulo] = 1
      
  
  

  for titulo in sorted(titulos, key=lambda titulo:titulos[titulo], reverse =True):#Ordenando
    print(titulo,'-', titulos[titulo])