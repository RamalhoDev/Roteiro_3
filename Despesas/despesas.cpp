#include <iostream>
#include <string>
#include "despesas.h"

using namespace std;

Despesas::Despesas(){
	valor = 0;
	tipoDeGasto = "default";
}

Despesas::Despesas(double valor, string tipoDeGasto){
	this->valor = valor;
	this->tipoDeGasto = tipoDeGasto;
}

Despesas::~Despesas(){
	valor = 0;
	tipoDeGasto = "default";
	cout << "Destrutor";
}

double getValor(){
	return valor;
}

string getTipoDeGasto(){
	return tipoDeGasto;
}

void setValor(double valor){
	this->valor = valor;
}

void setTipoDeGasto(string tipoDeGasto){
	this->tipoDeGasto = tipoDeGasto;
}