import urllib.request
url = urllib.request.urlopen('http://beans.itcarlow.ie/prices.html')
texto = url.read().decode('utf8')

inicio = texto.find('>$') + 2
fim = texto.find('</', inicio)

preco = texto[inicio:fim]

arquivo = open('minhaPagina.html', 'w', encoding='utf8')
arquivo.write(''' <!DOCTYPE html> <html> <head> <title>Minha página</title> </head> <body> <h1>Preço do Café</h1> <p>O preço do café é R${}</p> </body> </html>'''.format(preco))
arquivo.close() 