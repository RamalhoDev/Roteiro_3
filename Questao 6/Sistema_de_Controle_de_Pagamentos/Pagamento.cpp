#include "Pagamento.h"
#include <iostream>
#include <string>

using namespace std;


double Pagamento :: getValorPagamento(){
    return valorPagamento;
}

string Pagamento :: getNomeDoFuncionario(){
    return nomeDoFuncionario;
}

void Pagamento :: setValorPagamento(double valorPagamento){
    this -> valorPagamento  = valorPagamento;
}

void Pagamento :: setNomeDoFuncionario(string nomeDoFuncionario){
    this -> nomeDoFuncionario = nomeDoFuncionario;
}