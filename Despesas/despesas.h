#ifndef DESPESAS_H_
#define DESPESAS_H_
#include <iostream>
#include <string>

using namespace std;

class Despesas{
	private:
		double valor;
		string tipoDeGasto;
	public:
		Despesas();
		Despesas(double valor, string tipoDeGasto);
		virtual ~Despesas();
		//Modificadores
		void setValor(double valor);
		void setTipoDeGasto(string tipoDeGasto);
		//Acessores
		double getValor();
		string getTipoDeGasto();
};

#endif