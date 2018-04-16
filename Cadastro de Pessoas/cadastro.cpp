#include <iostream>
#include <string>
#include "cadastro.h"

using namespace std;

Pessoa::Pessoa(){
	nome = "Nome da pessoa";
	idade = 0;
	telefone = "081900000000";
}

Pessoa::Pessoa(string nome, int idade, string telefone){
	this->nome = nome;
	this->idade = idade;
	this->telefone = telefone;
}

Pessoa::~Pessoa(){
	//nothing buddy
}

string Pessoa::getNome(){
	return nome;
}

int Pessoa::getIdade(){
	return idade;
}

string Pessoa::getTelefone(){
	return telefone;
}

void Pessoa::setNome(string nome){
	this->nome = nome;
}

void Pessoa::setIdade(int idade){
	this->idade = idade;
}

void Pessoa::setTelefone(string telefone){
	this->telefone = telefone;
}