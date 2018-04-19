#ifndef CONTROLEDEDESPESAS_H_
#define CONTROLEDEDESPESAS_H_
#include <iostream>
#include <string>
#include <vector>
#include "despesas.h"

using namespace std;

class ControleDeDespesas{
	private:
		vector <Despesas> despesas;
	public:
		ControleDeDespesas();
		virtual ~ControleDeDespesas();
		void setDespesas(vector<Despesas> despesas);
		double calculaTotalDeDespesas(); 
		bool existeDespesaDoTipo(string tipoExiste);
	
};

#endif