import numpy as np

Vinicio = float(input("Digite o valor inicial: "))
Vfim = float(input("Digite o valor final: "))
Vpasso = float(input("Digite o passo: "))

for x in np.arange(Vinicio, Vfim + Vpasso, Vpasso):
    print(x)