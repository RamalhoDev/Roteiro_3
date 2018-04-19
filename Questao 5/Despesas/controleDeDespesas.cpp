#include <iostream>
#include <vector>
#include "controleDeDespesas.h"
#include "despesas.h"

using namespace std;

ControleDeDespesas::ControleDeDespesas(){
	//nothing
}

ControleDeDespesas::~ControleDeDespesas(){
	//nothing
}

void ControleDeDespesas::setDespesas(vector<Despesas> despesas){
	this->despesas = despesas;
}

double ControleDeDespesas::calculaTotalDeDespesas(){
	int i = 0;
	double soma = 0;

	while(despesas.size() >= i){
		soma += this->despesas[i].getValor();
		i++;
	}

	return soma;
}

bool ControleDeDespesas::existeDespesaDoTipo(string tipoExiste){
	int i = 0;

	while(i != despesas.size()){
		if(tipoExiste.compare(despesas[i].getTipoDeGasto()) == 0){
			return true;
		}else{
			i++;
		}
	}

	return false;
}