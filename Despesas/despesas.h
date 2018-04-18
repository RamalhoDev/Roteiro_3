#ifndef DESPESAS_H_
#define DESPESAS_H_
#include <string>

using namespace std;

class Despesas{
	private:
		double valor;
		string tipoDeGasto;
	public:
		Despesas();
		Despesas(double, string);
		virtual ~Despesas();
		double getValor();
		string getTipoDeGasto();
		void setValor(double valor);
		void setTipoDeGasto(string tipoDeGasto);
	
};

#endif