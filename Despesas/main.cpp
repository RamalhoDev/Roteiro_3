#include <iostream>
#include <string>
#include "controleDeDespesas.h"
#include "despesas.h"

using namespace std;

int main(){
	vector <Despesas> gasto(2);
	ControleDeDespesas *computo = new ControleDeDespesas();

	gasto[0].setTipoDeGasto("venda");
	gasto[0].setValor(500);

	gasto[1].setTipoDeGasto("aluguel");
	gasto[1].setValor(700);	

	computo->setDespesas(gasto);

	if(computo->existeDespesaDoTipo("aluguel")){
		cout << "Existe despesa com aluguel" << endl;
	}else{
		cout << "Não existe despesa com aluguel" << endl;
	}

	if(computo->existeDespesaDoTipo("casa")){
		cout << "Existe despesa com casa" << endl;
	}else{
		cout << "Não existe depesa com casa" << endl;
	}

	cout << "Gastos total: " << computo->calculaTotalDeDespesas() << endl;
}