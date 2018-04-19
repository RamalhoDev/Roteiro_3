#include <iostream>
#include "Data.h"

using namespace std;

Data::Data(){
	dia = 11;
	mes = 3;
	ano = 2000;
}

Data::Data(int d, int m, int a){
	dia = d;
	mes = m;
	ano = a;

	if (verificaData() == false){
		cout << "Data invalida" << endl;
		dia = 11;
		mes = 3;
		ano = 2000;
	}
}

Data::~Data(){
	// vazio
}

int Data::getDia(){
	return dia;
}

int Data::getMes(){
	return mes;
}

int Data::getAno(){
	return ano;
}

void Data::setDia(int d){
	dia = d;
}
void Data::setMes(int m){
	mes = m;
}
void Data::setAno(int a){
	ano = a;
}

bool Data::verificaData(){
	if ((dia <= 0) || (dia > 31))
		return false;
	if ((mes <= 0) || (mes > 12))
		return false;
	if ((ano < 0) || (ano > 2018))
	return false;
	if(mes==2 && dia>=30)
		return false;
	if(this->mes==2 && this->ano%4 !=0){
			if(this->dia==29){
				return false;
			}
		}

	return true;
}

void Data::avancarDia(){
	if(this->mes==4 || this->mes==6 || this->mes==4||this->mes==9||this->mes==11){
		if(this->dia!=30){
			cout<< this->dia+1 <<" / "<<this->mes<<" / "<<this->ano<<"\n";
		}
		else if(dia==31){
			cout<<"Data Inexistente!\n";
		}
		else{
			cout<<"01 / "<<this->mes+1<< " / "<<this->ano<<"\n";
		}
	}
	else if(this->mes==2){

		if(this->dia!=28 && this->dia !=29){
			cout<<this->dia+1<<" / 02 / "<<this->ano<<" \n";
		}
		else{
			if(this->mes==2 && this->ano%4==0){
				if(this->dia==29){
					cout<<"01 / 03 / "<<this->ano<<"\n";
				}
				else{
					cout<<"29 / 02 / "<<this->ano<<"\n";
				}
			}

		}
	}
	else if(this->mes==12 && this->dia==31){
		cout<<"01 / 01 / "<<this->ano+1<<"\n";
	}
	else{
		cout<<dia+1 <<" / "<<mes<<" / "<<ano<<"\n";
	}
}
