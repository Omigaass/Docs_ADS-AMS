adega = []

def adicionar_vinho():
    produto = input("Digite o nome do produto: ")
    casta = input("Digite a casta: ")
    safra = input("Digite a safra: ")
    adega.append({"Produto": produto, "Casta": casta, "Safra": safra})
    print("Vinho adicionado com sucesso!")

def abrir_para_jantar():
    if adega:
        ultimo_vinho = adega[-1]
        print("\nO vinho que será aberto no jantar é:")
        print(f"Produto: {ultimo_vinho['Produto']}, Casta: {ultimo_vinho['Casta']}, Safra: {ultimo_vinho['Safra']}")
    else:
        print("\nA adega está vazia. Nenhum vinho para abrir.")

def mostrar_cinco_antigos():
    if len(adega) > 0:
        print("\nAs cinco aquisições mais antigas são:")
        for vinho in adega[:5]:
            print(f"Produto: {vinho['Produto']}, Casta: {vinho['Casta']}, Safra: {vinho['Safra']}")
    else:
        print("\nA adega está vazia.")

def menu():
    while True:
        print("\n=== MENU ===")
        print("1. Adicionar novo vinho à adega")
        print("2. Informar qual vinho abrir no jantar")
        print("3. Mostrar as cinco aquisições mais antigas")
        print("4. Sair")
        opcao = input("Escolha uma opção: ")
        
        if opcao == "1":
            adicionar_vinho()
        elif opcao == "2":
            abrir_para_jantar()
        elif opcao == "3":
            mostrar_cinco_antigos()
        elif opcao == "4":
            print("Saindo do programa. Até mais!")
            break
        else:
            print("Opção inválida. Tente novamente.")

menu()