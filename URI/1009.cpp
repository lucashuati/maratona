#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string nome;
	double salario, vendas;
	
	getline(cin,nome);
	cin >> salario >> vendas;
	
	cout << "TOTAL = R$ ";
	
	printf("%.2f\n",vendas*0.15  + salario);
	return 0;
}