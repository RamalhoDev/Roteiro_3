#ifndef CONTROLEDEPAGAMENTO_H
#define CONTROLEDEPAGAMENTO_H
#include <string>
#include "Pagamento.h"
#include <vector>
using namespace std;

class ControleDePagamento{
    vector <Pagamento> pagamentos;
    public:
        void setPagamentos(double valorPagamento, string nomeDoFuncionario);
        double calculoTotalDePagamentos();
        bool existePagamentoParaFuncionario(string nomeFuncionario);
};


#endif