#include <iostream>
#include "controleDeDespesas.h"

using namespace std;

void ControleDeDespesas::setDespesas(vector<Despesas> despesas){
	this->despesas = despesas;
}

double ControleDeDespesas::calculaTotalDeDespesas(){
	int i = 0;
	double soma = 0;

	while(despesas[i].getValor() > 0){
		soma += despesas[i].getValor();
	}

	return soma;
}

bool ControleDeDespesas::existeDespesaDoTipo(string tipoDeGasto){
	int i = 0;

	while(true){
		if(despesas[i].getTipoDeGasto() == tipoDeGasto){
			return true;
		}else{
			i++
		}

		return false;
	}
}