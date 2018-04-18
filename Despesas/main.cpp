#include <iostream>
#include <string>
#include "controleDeDespesas.h"
#include <despesas.h>

using namespace std;

int main(){
	vector <Despesas> gasto(2);
	ControleDeDespesas *despesas = new ControleDeDespesas();
	despesas->setDespesa(gasto);

	gasto[0].setTipoDeGasto("venda");
	gasto[0].setValor(500);

	gasto[1].setTipoDeGasto("aluguel");
	gasto[1].setValor(700);	

	cout << despesas->existeDespesaDoTipo("aluguel") << endl;
}