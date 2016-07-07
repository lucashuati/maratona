#include "bits/stdc++.h"

using namespace std;

int main(){
	int Limitcases, cases = 1;
	cin >> Limitcases;
	while(cases <= Limitcases){
		int dia[2], mes[2], ano[2];
		char lixo;
		//leitura
		cin >> dia[0];
		cin >> lixo;
		cin >> mes[0];
		cin >> lixo;
		cin >> ano[0];
		cin >> dia[1];
		cin >> lixo;
		cin >> mes[1];
		cin >> lixo;
		cin >> ano[1];
		// 0 - nascimento | 1 - morte
		int idade;
		idade = ano[0] - ano[1];
		if(mes[0] - mes[1] < 0){
			idade--;
		}
		if(dia[0] - dia[1] < 0 && mes[0] - mes[1] == 0){
			idade--;
		}
		if(ano[1] == ano[0] && mes[1] == mes[0] && dia[1] == dia[0])
			idade = 0;

		if(idade < 0)
			printf("Case #%d: Invalid birth date\n",cases);
		else{
			if(idade > 130){
				printf("Case #%d: Check birth date\n",cases);	
			}else{
				printf("Case #%d: %d\n",cases,idade);	
			}
		}

		cases++;
	}
	return 0;
}