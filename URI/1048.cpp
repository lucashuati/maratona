#include <bits/stdc++.h>

using namespace std;

int main(){
	double salario, novo_salario, reajuste; 
	int reajuste_percentual;
	scanf("%lf", &salario);
	if(salario <= 400.00){
		reajuste = salario * 0.15;
		novo_salario = salario + reajuste;
		reajuste_percentual = 15;
	}else{
		if(salario <= 800.00){
			reajuste = salario * 0.12;
			novo_salario = salario + reajuste;
			reajuste_percentual = 12;
		}else{
			if(salario <= 1200.00){
				reajuste = salario * 0.10;
				novo_salario = salario + reajuste;
				reajuste_percentual = 10;
			}else{
				if(salario <= 2000.00){
					reajuste = salario * 0.07;
					novo_salario = salario + reajuste;
					reajuste_percentual = 7;
				}else{
					reajuste = salario * 0.04;
					novo_salario = salario + reajuste;
					reajuste_percentual = 4;
				}
			}
		}
	}
	printf("Novo salario: %.2lf\n",novo_salario);
	printf("Reajuste ganho: %.2lf\n",reajuste);
	printf("Em percentual: %d %%\n",reajuste_percentual);
	
	return 0;
}