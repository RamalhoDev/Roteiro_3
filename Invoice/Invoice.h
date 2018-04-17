#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice {
    
    private:
        int numero ,quantidade;
        std::string descricao;
        double preco;
    
    public:
        Invoice(int numero, std::string descricao, int quantidade, double preco);
        int getNumero();
        std::string getDescricao();
        int getQuantidade();
        double getPreco();
        
        void setNumero(int numero);
        void setDescricao(std::string descricao);
        void setQuantidade(int quantidade);
        void setPreco(double preco);

        double getInvoiceAmount();
};

#endif