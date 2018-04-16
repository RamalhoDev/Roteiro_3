#include "Invoice.h"
#include <iostream>
#include <string>

using namespace std;


Invoice :: Invoice(int numero, string descricao, int quantidade, double preco){
    this -> numero = numero;
    this -> descricao = descricao;
    this -> quantidade = quantidade;
    this -> preco = preco;
}

int Invoice :: getNumero(){
    return numero;
}
string Invoice :: getDescricao(){
    return descricao;
}
int Invoice :: getQuantidade(){
    return quantidade;
}
double Invoice :: getPreco(){
    return preco;
}

void Invoice :: setNumero(int numero){
    this->numero = numero;
}
void Invoice :: setDescricao(string descricao){
    this->descricao = descricao;
}
void Invoice :: setQuantidade(int quantidade){
    this -> quantidade = quantidade;
}
void Invoice :: setPreco(double preco){
    this -> preco = preco;
}

double Invoice :: getInvoiceAmount(){
  if(preco>=0 && quantidade>=0)
      return preco*quantidade;
  else
      return 0;
}