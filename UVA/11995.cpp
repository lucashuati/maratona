#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		
		bool pilha = true, filaPrioridade = true, fila = true, impossivel = false;
		queue<int> Fila;
		stack<int> Pilha;
		priority_queue<int> FilaPrioridade;
		while(!Fila.empty()){
			Fila.pop();
		}
		while(!FilaPrioridade.empty()){
			FilaPrioridade.pop();
		}
		while(!Pilha.empty()){
			Pilha.pop();
		}
		for(int i = 0; i < n; i++){
			int comand;
			int value;
			scanf("%d %d", &comand, &value);
			if(comand == 1){
				Fila.push(value);
				Pilha.push(value);
				FilaPrioridade.push(value);
			}else{
				int comp = -1;
				if(!Fila.empty()){
					comp = Fila.front();
					Fila.pop();
				}
				else{
					fila = false;
				}
					
				if(comp != value){
					fila = false;
				}
				if(!Pilha.empty()){
					comp = Pilha.top();
					Pilha.pop();
				}
				else
					pilha = false;
				if(comp != value){
					pilha = false;
				}
				if(!FilaPrioridade.empty()){
					comp = FilaPrioridade.top();
					FilaPrioridade.pop();
				}
				else
					filaPrioridade = false;
				if(comp != value){
					filaPrioridade = false;
				}
			}	
		} 
		if(filaPrioridade + pilha + fila == 0)
				printf("impossible\n");
			else{
				if(fila + pilha + filaPrioridade > 1){
					printf("not sure\n");
				}else{
					if(fila){
						printf("queue\n");
					}else{
						if(pilha){
							printf("stack\n");
						}else{
							printf("priority queue\n");
						}
					}
				}
			}
	}
	return 0;
}