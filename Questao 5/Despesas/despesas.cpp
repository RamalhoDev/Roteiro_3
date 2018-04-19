#include <iostream>
#include <string>
#include "despesas.h"

using namespace std;

Despesas::Despesas(){
	this->valor = 0;
	this->tipoDeGasto = "default";
}

Despesas::Despesas(double valor, string tipoDeGasto){
	this->valor = valor;
	this->tipoDeGasto = tipoDeGasto;
}

Despesas::~Despesas(){
	//nothing
}

double Despesas::getValor(){
	return this->valor;
}

string Despesas::getTipoDeGasto(){
	return this->tipoDeGasto;
}

void Despesas::setValor(double valor){
	this->valor = valor;
}

void Despesas::setTipoDeGasto(string tipoDeGasto){
	this->tipoDeGasto = tipoDeGasto;
}