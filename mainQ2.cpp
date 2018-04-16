#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main(){
    Invoice *fatura = new Invoice(12356789, "teclado", 2, 25.9);
    Invoice fatura2(22222222,"mouse",3,15);
    Invoice fatura3(11111111,"fone de ouvido", 4, 30);

    fatura->setQuantidade(3);
    fatura->setDescricao("tela lcd");
    fatura -> setPreco(300);

    cout << "Valor da Fatura 2: " << fatura2.getInvoiceAmount() << endl;
    cout << "Descricao da fatura 3: "<< fatura3.getDescricao() << endl;
    cout << "Valor da Fatura 3: "<< fatura3.getInvoiceAmount() << endl;
}