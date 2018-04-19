#include<iostream>
#include<string>
#include "empregado.h"
using namespace std;
main()
{
    Empregado peao("joao", "da Silva", 1200);
    char n[100], s[100];
    double S;
    peao.setNome();
    peao.setSobrenome();
    peao.Salario();

    cout<<"Funcionario:  "<<peao.getNome()<<" "<<peao.getSobrenome()<<"  -  "<<peao.getSalario()<<endl;
    cout<<peao.Aumento();
    return 0;
}
