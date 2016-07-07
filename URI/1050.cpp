#include <bits/stdc++.h>

using namespace std;

int main(){
	int ddd;
	bool c = false;
	cin >> ddd;
	if(ddd == 61){
		cout << "Brasilia\n";
		c = true;
	}
	if(ddd == 71){
		c = true;
		cout << "Salvador\n";
	}
	if(ddd == 11){
		c = true;
		cout << "Sao Paulo\n";
	}
	if(ddd == 21){
		c = true;
		cout << "Rio de Janeiro\n";
	}
	if(ddd == 32){
		c = true;
		cout << "Juiz de Fora\n";
	}
	if(ddd == 19){
		c = true;
		cout << "Campinas\n";
	}
	if(ddd == 27){
		c = true;
		cout << "Vitoria\n";
	}
	if(ddd == 31){
		c = true;
		cout << "Belo Horizonte\n";
	}
	if(!c)
		cout << "DDD nao cadastrado" << endl;

	return 0;

}