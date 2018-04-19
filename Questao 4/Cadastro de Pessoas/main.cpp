#include <iostream>
#include <string>
#include <string.h>
#include "cadastro.h"
#define MAX 255

using namespace std;

int main(){
	Pessoa cadastroDePessoas;

	string nome, telefone;
	int idade;

	cout << "Nome atual: " << cadastroDePessoas.getNome() << endl;
	cout << "Idade atual: " << cadastroDePessoas.getIdade() << endl;
	cout << "Telefone atual: " << cadastroDePessoas.getTelefone() << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl << endl;

	cout << "Digite o nome da pessoa: ";
	getline(cin, nome);
	cadastroDePessoas.setNome(nome);

	cout << "Digite a idade da pessoa: ";
	cin >> idade;
	cadastroDePessoas.setIdade(idade);

	cout << "Digite o telefone da pessoa: ";
	cin >> telefone;
	cadastroDePessoas.setTelefone(telefone);

	cout << endl << "-----------------------------------------------------------------------------------------" << endl;
	cout << "Nome atualizado: " << cadastroDePessoas.getNome() << endl;
	cout << "Idade atualizado: " << cadastroDePessoas.getIdade() << endl;
	cout << "Telefone atualizado: " << cadastroDePessoas.getTelefone() << endl;
}