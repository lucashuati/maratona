#include <bits/stdc++.h>

using namespace std;

double preco(int id){
	switch(id){
		case 1:
			return 4;
		case 2:
			return 4.5;
		case 3:
			return 5;
		case 4:
			return 2;
		case 5:
			return 1.50;
	}
	return 0;
}

int main(){
	int qtd, id;
    cin >> id >> qtd;
    double valor = qtd * preco(id);
    cout << "Total: R$ ";
    printf("%.2f\n",valor);
    return 0;
}