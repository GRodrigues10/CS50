peoples = {
  'Gabriel': '219-555-5555',
  'Jonathan': '219-555-5556'
}
telefones = input('Digite um nome:')
if telefones in peoples:
  print(peoples[telefones])
else:
  print('Não encontrado!')