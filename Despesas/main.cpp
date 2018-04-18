#include <iostream>
#include <string>
#include "controleDeDespesas.h"
#include "despesas.h"

using namespace std;

int main(){
	ControleDeDespesas *computo = new ControleDeDespesas();

	int indice;
	double valor;
	string tipo;

	cout << "Digite quantas dispesas você quer cadastrar: ";
	cin >> indice;

	vector <Despesas> gasto(indice);

	for(int i = 0; i < indice; i++){
		cout << "Digite o tipo de gasto: ";
		cin >> tipo;
		gasto[i].setTipoDeGasto(tipo);

		cout << "Digite o valor do gasto: ";
		cin >> valor;
		gasto[i].setValor(valor);
	}	

	computo->setDespesas(gasto);

	cout << endl << "Faça uma busca por tipo de gasto: ";
	cin >> tipo;

	for(int i = 0; i < indice; i++){
		if(computo->existeDespesaDoTipo(tipo)){
			if(gasto[i].getTipoDeGasto() == tipo){
				cout << "Existe despesa com " << tipo << endl;
				cout << "Valor: " << gasto[i].getValor() << endl;
			}
		}else{
			cout << "Não existe despesa com " << tipo << endl;
		}
	}

	cout << "Gastos total: " << computo->calculaTotalDeDespesas() << endl;
}