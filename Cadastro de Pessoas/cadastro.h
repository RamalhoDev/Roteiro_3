/*
	UNIVERDIADE FEDERAL DA PARAIBA
*/

#include <string>
#ifndef CADASTRO_H_
#define CADASTRO_H_
#define TRUE 1
#define FALSE 0

using namespace std;

class Pessoa{
	private:
		string nome;
		int idade;
		string telefone;
		string tudoJunto;
	public: 
		Pessoa();
		Pessoa(string, int, string);
		virtual ~Pessoa();
		string getNome();
		int getIdade();
		string getTelefone();
		void setNome(string nome);
		void setIdade(int idade);
		void setTelefone(string telefone);
};

#endif