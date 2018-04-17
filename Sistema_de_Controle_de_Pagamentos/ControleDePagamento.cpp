#include "ControleDePagamento.h"
#include <iostream>
#include <string>

using namespace std;


void ControleDePagamento :: setPagamentos(double valorPagamento, string nomeDoFuncionario){
        Pagamento x;
        x.setValorPagamento(valorPagamento);
        x.setNomeDoFuncionario(nomeDoFuncionario);
        pagamentos.push_back(x);
}

double ControleDePagamento :: calculoTotalDePagamentos(){
    double total = 0;
    for(vector <Pagamento> :: iterator it = pagamentos.begin(); it != pagamentos.end()  ;it++){
        total+= it->getValorPagamento();
    }
    return total;
}

bool ControleDePagamento :: existePagamentoParaFuncionario(string nomeFuncionario){
    for(vector <Pagamento> :: iterator it = pagamentos.begin(); it != pagamentos.end()  ;it++){
        if(nomeFuncionario == it->getNomeDoFuncionario())
            return true;
        else
            return false;
    }
}