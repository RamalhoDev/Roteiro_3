#ifndef CONTROLEDEDESPESAS_H_
#define CONTROLEDEDESPESAS_H_
#include "despesas.h"
#include <string>
#include <vector>

using namespace std;

class ControleDeDespesas{
	private:
		vector <Despesas> despesas;
	public:
		ControleDeDespesas();
		void setDespesa(vector<Despesas> despesas);
		double calculaTotalDeDespesas(); 
		bool existeDespesaDoTipo(string tipo);
	
};

#endif