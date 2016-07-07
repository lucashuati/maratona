#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main(){

	char cpf[15];
	int somab1 = 0, somab2 = 0;

	while(scanf("%s",cpf) != EOF){
		somab1 = 0, somab2 = 0;		
		for(int i = 0, j = 1, k = 9; i < 15; i++){
			
			if(cpf[i] >= '0' && cpf[i] <= '9'){
				if(i < 12){
					int c = cpf[i] - '0';
					somab1 += c * j;
					somab2 += c * k;
				}
				j++;
				k--;
			}
	
		}
		int b1, b2;
	
		if(somab1%11 == 10)
			b1 = 0;
		else
			b1 = somab1 % 11;
	
		if(somab2%11 == 10)
			b2 = 0;
		else
			b2 = somab2 % 11;
		
		
		
		int B1, B2;
		B1 = cpf[12] - '0';
		B2 = cpf[13] - '0';

		if(B1 == b1 && B2 == b2)
			cout << "CPF valido" << endl;
		else
			cout << "CPF invalido" << endl;
	}

	return 0;
}