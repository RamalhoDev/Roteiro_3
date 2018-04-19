#include<iostream>
#include<string>

using namespace std;

Empregado::Empregado()
{
	nome="Gilberto";
	sobrenome="Robert";
	salario=0.50;
}
Empregado::Empregado(string n, string s, double S)
{
	nome=n;
	sobrenome=s;
	slario=S;
	if(verificaEmpregado()==false)
	{
		nome="Gilberto";
		sobrenome="Robert";
		salario=0.50;
	}
}
Empregado::~Empregado()
{
	
}
string Empregado::getNome()
{
	return nome;
}
string Empregado::getSobrenome()
{
	return sobrenome;
}
double Empregado::getSalario()
{
	return salario;
}
void Empregado::setNome(string n)
{
	nome=n;
}

void Empregado::setSobrenome(string s)
{
	sobrenome=s;
}
void Empregado::setSalario(double S)
{
	salario=S;
}
bool Empregado::verificaEmpregado()
{
	if(salario<0)
		return false;
	return true;
}
void Empregado::Aumento()
{
	//getline(cin,nome) FALTAAAAAA
}
