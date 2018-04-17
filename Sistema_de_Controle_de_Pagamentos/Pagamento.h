#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

using namespace std;

class Pagamento{
    double valorPagamento;
    string nomeDoFuncionario;
    public:
        double getValorPagamento();
        string getNomeDoFuncionario();
        void setValorPagamento(double pagamento);
        void setNomeDoFuncionario(string nomeDoFuncionario);
};

#endif