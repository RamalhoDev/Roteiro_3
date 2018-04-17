#include <iostream>
#include <string>
#include "ControleDePagamento.h"

using namespace std;

int main(){
    double salario = 750.99;
    string nome = "RODRIGO RAMALHO";
    double salario2 = 800.99;
    string nome2 = "BRUNO PASSETI";

    ControleDePagamento funcionario;
    funcionario.setPagamentos(salario,nome);
    funcionario.setPagamentos(salario2,nome2);

    cout << "Total de pagamentos: R$ " << funcionario.calculoTotalDePagamentos()<< endl;
    
    cout << "Existe pagamento para o funcionario " << nome << " ?"<< endl;
    if(funcionario.existePagamentoParaFuncionario(nome)){
        cout << "EXISTE !" << endl;
    }else{
        cout << "NÃO EXISTE!" << endl;
    }
}