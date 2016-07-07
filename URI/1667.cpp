#include <bits/stdc++.h>

using namespace std;

int main(){
	char c; 
	int contador = 0, cLinha = 0;
	string linha;
	bool inicio = true;
	int newLinha = 1;
	while(cin >> linha){
		
		if(linha == "<br>"){
			printf("\n");
			newLinha = 1;
			linha.clear();
			cLinha = 0;
		}else{
			if(linha == "<hr>"){
				if(newLinha != 1)
					printf("\n");
				printf("--------------------------------------------------------------------------------\n");
				newLinha = 1;
				linha.clear();
				cLinha = 0;
			}else{
				if(cLinha+linha.size() > 80){	
					cLinha = linha.size()+1;
					newLinha = 0;
					printf("\n");
					cout << linha;
					linha.clear();
				}else{
					if(newLinha != 1)
						printf(" ");
					newLinha = 0;
					cLinha += linha.size()+1;
					cout << linha;
					linha.clear();
				}	
			}
		}
	}
	printf("\n");
    return 0;
}