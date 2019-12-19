print('AAAAAAAAAAAAAAAAAAAAAA')
print('eu to morrendo de sono')
print('AAAAAAAAAAAAAAAAAAAAAA')

num_baitola = 69
tentativas = 3
rodadas = 1

print('\né de 0-100 e tu tem 3 chances mizera')

while tentativas >= rodadas:
    print('\n', rodadas, 'de', tentativas)
    chute = int(input('tenta aí seu babaca: '))

    if chute == num_baitola:
        print('\npelo menos nisso tu acerta...')
        break
    else:
        if chute > num_baitola:
            print('\nFOI LONGE PRA PORRA BOY, tai vissano é?')
            print('tu não cansa de ser um fracasso?')
            break
        if chute < num_baitola:                                      # elif -> break
            print('\nmenor que isso só teu pau!')
            print('tu não cansa de ser um fracasso?')
            break
    
    rodadas = rodadas +1

print('carai tu é um fudido mesmo viu? já era :/')