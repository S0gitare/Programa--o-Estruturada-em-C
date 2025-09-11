# Crie duas estruturas: Endereço (rua, número, cidade) e Pessoa (nome, idade, endereço). Cadastre 3 pessoas e mostre seus dados completos. Use estruturas aninhadas.

import json


class Endereco:
    def __init__(self, rua, numero, cidade):
        self.rua = rua
        self.numero = numero
        self.cidade = cidade


class Pessoa:
    def __init__(self, nome, idade, endereco):
        self.nome = nome
        self.idade = idade
        self.endereco = endereco


def mostrar_dados(pessoa):
    print(f"Nome: {pessoa.nome}")
    print(f"Idade: {pessoa.idade}")
    print(
        f"Endereço: {pessoa.endereco.rua}, {pessoa.endereco.numero}, {pessoa.endereco.cidade}"
    )
    print()


lista_pessoas = []

for i in range(3):
    nome = input("Digite o nome:")
    idade = int(input("Digite a idade:"))
    rua = input("Digite a rua:")
    numero = input("Digite o número:")
    cidade = input("Digite a cidade:")
    endereco = Endereco(rua, numero, cidade)
    pessoa = Pessoa(nome, idade, endereco)
    lista_pessoas.append(pessoa)
    print()

for pessoa in lista_pessoas:
    mostrar_dados(pessoa)


dicionario = dict(zip(range(len(lista_pessoas)), lista_pessoas))


with open("pessoas.json", "w", encoding="utf-8") as f:
    json.dump(dicionario, f, default=lambda o: o.__dict__, indent=4, ensure_ascii=False)
