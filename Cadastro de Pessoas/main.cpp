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

	cout << cadastroDePessoas.getNome() << endl;
	cout << cadastroDePessoas.getIdade() << endl;
	cout << cadastroDePessoas.getTelefone() << endl;

	cout << "Digite o nome da pessoa: ";
	getline(cin, nome);
	cadastroDePessoas.setNome(nome);

	cout << "Digite a idade da pessoa: ";
	cin >> idade;
	cadastroDePessoas.setIdade(idade);

	cout << "Digite o telefone da pessoa: ";
	getline(cin, telefone);
	cadastroDePessoas.setTelefone(telefone);

	cout << cadastroDePessoas.getNome() << endl;
	cout << cadastroDePessoas.getIdade() << endl;
	cout << cadastroDePessoas.getTelefone() << endl;
}