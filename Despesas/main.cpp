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
	cin.ignore();

	vector <Despesas> gasto(indice);

	for(int i = 0; i < indice; i++){
		cout << "Gasto #" << i+1 << endl;
		cout << "Digite o tipo de gasto: ";
		getline(cin, tipo);
		gasto[i].setTipoDeGasto(tipo);

		cout << "Digite o valor do gasto: ";
		cin >> valor;
		gasto[i].setValor(valor);
		cin.ignore();
		cout << endl;;
	}	

	computo->setDespesas(gasto);

	cout << endl << "Faça uma busca por tipo de gasto: ";
	getline(cin, tipo);

	if(computo->existeDespesaDoTipo(tipo)){
		cout << "-------------------------------------" << endl;
		cout << "Valores da despesa do tipo: " << tipo << endl;
		cout << "-------------------------------------" << endl;
	}

	for(int i = 0; i < indice; i++){
		if(computo->existeDespesaDoTipo(tipo)){
			if(gasto[i].getTipoDeGasto() == tipo){
				cout << "Valor: R$" << gasto[i].getValor() << endl;
				soma += gasto[i].getValor();
			}

		}else{
			cout << "-------------------------------------" << endl;
			cout << "Não existe despesa com " << tipo << endl;
			cout << "-------------------------------------" << endl;
			break;
		}
	}
	
	if(computo->existeDespesaDoTipo(tipo)){
		cout << "-------------------------------------" << endl;
		cout << "Total da busca: R$" << soma << endl;
		cout << "-------------------------------------" << endl;
	}

	cout << endl << "Gastos total: R$" << computo->calculaTotalDeDespesas() << endl;
}