#include <string>
#ifndef CADASTRO_H_
#define CADASTRO_H_
#define TRUE 1
#define FALSE 0

class Pessoa{
	private:
		string nome;
		int idade;
		string telefone;
	public: 
		Pessoa();
		Pessoa(string, int, int);
		virtual ~Pessoa();
		string getNome();
		int getIdade();
		string getTelefone();
		void setNome();
		void setIdade();
		void setTelefone();
}