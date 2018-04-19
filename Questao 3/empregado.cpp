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
    double ano, aumento;
    ano=salario*13;
    aumento=ano+ano*0.1;
    cout<<"Salario anual com decimo terceiro:  "<<ano<<endl;
    cout<<"Salario anual com +10%:  "<<aumento<<endl;
}
