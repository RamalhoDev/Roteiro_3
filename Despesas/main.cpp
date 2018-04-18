#include <iostream>
#include <string>
#include "controleDeDespesas.h"
#include "despesas.h"

using namespace std;

int main(){
	ControleDeDespesas *computo = new ControleDeDespesas();

	int indice;
	double valor, soma = 0;
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

	cout << "-------------------------------------" << endl;
	cout << "Valores da despesa do tipo: " << tipo << endl;
	cout << "-------------------------------------" << endl;
	for(int i = 0; i < indice; i++){
		if(computo->existeDespesaDoTipo(tipo)){
			if(gasto[i].getTipoDeGasto() == tipo){
				cout << "Valor: R$" << gasto[i].getValor() << endl;
				soma += gasto[i].getValor();
			}

		}else{
			cout << "Não existe despesa com " << tipo << endl;
			break;
		}
	}
	cout << "-------------------------------------" << endl;
	cout << "Total da busca: R$" << soma << endl;

	cout << "-------------------------------------" << endl;
	cout << endl << "Gastos total: R$" << computo->calculaTotalDeDespesas() << endl;
}