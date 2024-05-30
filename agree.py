pergunta = input("Você concorda?").lower()

if pergunta in ['s', 'sim']:
  print('Concordou!')
elif pergunta in ['n', 'não']:
  print('Não concordou!')
else:
  print('Resposta inválida!')