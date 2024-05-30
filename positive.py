def main():
    i = getPositiveInt()
    print(i)

def getPositiveInt():
    while True:
        n = int(input('Digite um número inteiro positivo: '))
        if n > 0:
            break
        else:
            print('Número inválido. Tente novamente.')

    return n

if __name__ == '__main__':
  main()
    