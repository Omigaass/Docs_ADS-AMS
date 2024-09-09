url = open('arqEntrada.txt', 'r', encoding='utf8')
texto = url.read()

linhas = texto.splitlines()
for i in linhas:
    parte = i.split(',')
    nome = parte[0]
    nota1 = float(parte[1])
    nota2 = float(parte[2])
    media = (nota1 + nota2) / 2
    print(f'{nome} {media}')
url.close()