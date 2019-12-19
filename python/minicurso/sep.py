dia = 7
mes = 2
ano = 2002

print('\n')
print(dia, "/", mes, "/", ano)                             # método bruto

print(dia, mes, ano, sep = "/")                            # no 'sep' você escolhe o que deseja para separar as variáveis

print('{:02.0f}/{:02.0f}/{}'.format(dia, mes, ano))        # '{}' serve pra reservar o espaço que será utilizado pra jogar um valor no .format
print('\n')