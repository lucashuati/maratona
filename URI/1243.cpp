#include <bits/stdc++.h>

using namespace std;

int main(){
	string linha;
	while(getline(cin, linha)){
		int num_pontos = 0, num_letras = 0, palavras = 0, total_letras = 0;
		bool tem_num = false;

		for(int i = 0; i <= linha.size(); i++){
			//Formaçao de palavra
			if(linha[i] == ' ' || i == linha.size()){
				if((num_letras != 0 && num_pontos == 0 && !tem_num) || (num_letras != 0 && num_pontos == 1 && !tem_num && linha[i-1] == '.')){
					palavras++;
					total_letras += num_letras;
				}
				num_letras = 0, num_pontos = 0, tem_num = false;	
			}else{
				if((linha[i] >= 'a' && linha[i] <= 'z') || (linha[i] >= 'A' && linha[i] <= 'Z')){
					num_letras++;
				}else{
					if(linha[i] == '.'){
						num_pontos++;
					}
					else
						tem_num = true;
				}
			}
		}
		int result;
		if(palavras == 0){
			result = 0;
		}else{
			result = total_letras/palavras;
		}
		if(result <= 3)
			printf("250\n");
		else{
			if(result < 6)
				printf("500\n");
			else
				printf("1000\n");
		}

	}
	return 0;
}