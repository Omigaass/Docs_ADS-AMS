Lancamentos = []

def validador(Lancamentos):
  for i in range(len(Lancamentos)):
    if(i + 2) <= len(Lancamentos):
      if Lancamentos[i] == Lancamentos[i+1] and Lancamentos[i] == Lancamentos[i+2]:
        return False
    else:
      return True

while True:
  valor = int(input("Digite um valor (pressione 0 para finalizar): "))

  if valor == 0:
    break
  Lancamentos.append(valor)

if validador(Lancamentos):
  print("Sequência Valida!")
else:
  print("Sequência Invalida!")