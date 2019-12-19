# adivinhação

import random

def jogar():
    print('-----------')
    print('ADIVINHAÇÃO')
    print('-----------')

    # método 1: round(random.random()*100)
    # método 2: random.randrange(0,101) do primeiro até o último valor -1
    num_baitola = random.randint(0,100)                                # retorna um inteiro no intervalo determinado
    tentativas = 3
    rodadas = 1

    print('\né de 0-100 e tu tem 3 chances mizera')

    while tentativas >= rodadas:
        print('\n', rodadas, 'de', tentativas)
        chute = int(input('tenta aí seu babaca: '))

        if chute < 0 or chute > 100:
            print('chute inválido')
            continue

        if chute == num_baitola:
            print('\npelo menos nisso tu acerta...')
            break

        else:
            if chute > num_baitola:
                print('\nFOI LONGE PRA PORRA BOY, tai vissano é?')
                print('tu não cansa de ser um fracasso?')

            if chute < num_baitola:                                    # elif -> break
                print('\nmenor que isso só teu pau!')
                print('tu não cansa de ser um fracasso?')
        
        rodadas = rodadas +1

    print('era', num_baitola, '\n')

print('Fim de jogo')

if __name__ == '__main__':
    jogar()