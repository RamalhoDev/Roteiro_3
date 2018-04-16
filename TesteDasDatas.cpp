#include <iostream>
#include "Data.h"

using namespace std;

int main(){
	Data hoje(12,12,12);

	int d, m, a;
	cout<<"Digite o dia (seu niver): "<<endl;
	cin>>d;
	hoje.setDia(d);
	cout<<"Digite o mes (seu niver): "<<endl;
	cin>>m;
	hoje.setMes(m);
	cout<<"Digite o ano (seu niver): "<<endl;
	cin>>a;
	hoje.setAno(a);
	
	
	
	cout << "Data de hoje: " << hoje.getDia()
			<< " / " << hoje.getMes()
			<< " / " << hoje.getAno() << endl;
	
	cout<< "\nData amanha: ";
	hoje.avancarDia();
	
	return 0;
	
}
