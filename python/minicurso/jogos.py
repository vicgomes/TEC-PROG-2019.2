# JOGOS

import forca
import adivinhacao

def escolher_jogos():
    print('---------------------------------')
    print('tu não tem nada melhor pra fazer?')
    print('---------------------------------')

    print('(1)forca\t(2)adivinhação')

    jogos = int(input('Qual jogo você deseja?'))

    if jogos == 1:
        forca.jogar()

    if jogos == 2:
        adivinhacao.jogar()

if __name__ == '__main__':
    escolher_jogos()