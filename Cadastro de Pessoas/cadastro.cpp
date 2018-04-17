/*
	UNIVERDIADE FEDERAL DA PARAIBA
*/
#include <iostream>
#include <string>
#include <stdio.h>
#include "cadastro.h"

using namespace std;

//Construtor nome, idade e telefone
Pessoa::Pessoa(){
	nome = "Nome da pessoa";
	idade = 0;
	telefone = "Numero da pessoa";
}

//Construtor sobrecarregado - Recebe nome, idade e telefone
Pessoa::Pessoa(string nome, int idade, string telefone){
	this->nome = nome;
	this->idade = idade;
	this->telefone = telefone;
}

//Destrutor
Pessoa::~Pessoa(){
	nome = "";
	idade = 0;
	telefone = "";
	cout << "Destruindo o objeto da classe Pessoa" << endl;
}

/*-------------------------------------------------------
	METODOS DE ACESSO
--------------------------------------------------------*/

//Retorna o nome atual
string Pessoa::getNome(){
	return nome;
}

//Retorna a idade atual
int Pessoa::getIdade(){
	return idade;
}

//Retorna o numero de telefone atual
string Pessoa::getTelefone(){
	return telefone;
}

/*-------------------------------------------------------
	     MODIFICADORES
--------------------------------------------------------*/

//Ajusta/Atualiza o conteúdo da variavel nome
void Pessoa::setNome(string nome){
	this->nome = nome;
}

//Ajusta/Atualiza o conteúdo da variavel idade
void Pessoa::setIdade(int idade){
	this->idade = idade;
}

//Ajusta/Atualiza o conteúdo da variavel telefone
void Pessoa::setTelefone(string telefone){
	this->telefone = telefone;
}