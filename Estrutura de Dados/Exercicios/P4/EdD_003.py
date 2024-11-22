candidatos = {}

def adicionar_candidato():
    nome = input("Digite o nome do novo candidato: ")
    if nome in candidatos:
        print("Candidato já existe!")
    else:
        candidatos[nome] = 0
        print(f"Candidato {nome} adicionado com sucesso!")

def votar():
    if not candidatos:
        print("Nenhum candidato disponível para votar.")
        return
    
    print("\nCandidatos disponíveis:")
    for candidato in candidatos:
        print(f"- {candidato}")
    
    voto = input("Digite o nome do candidato em quem deseja votar: ")
    if voto in candidatos:
        candidatos[voto] += 1
        print(f"Voto registrado para {voto}!")
    else:
        print("Candidato não encontrado.")

def exibir_resultados():
    if not candidatos:
        print("Nenhum candidato registrado.")
        return
    
    print("\nResultados da votação:")
    for candidato, votos in candidatos.items():
        print(f"{candidato}: {votos} votos")

def menu():
    while True:
        print("\n=== MENU ===")
        print("1. Adicionar candidato")
        print("2. Votar")
        print("3. Exibir resultados")
        print("4. Sair")
        opcao = input("Escolha uma opção: ")
        
        if opcao == "1":
            adicionar_candidato()
        elif opcao == "2":
            votar()
        elif opcao == "3":
            exibir_resultados()
        elif opcao == "4":
            print("Saindo do sistema de votação. Até mais!")
            break
        else:
            print("Opção inválida. Tente novamente.")

menu()