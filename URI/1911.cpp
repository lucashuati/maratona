#include <bits/stdc++.h>

using namespace std;

typedef struct aluno{
	string assinatura, nome;
}aluno;

bool comp(aluno a, aluno b){
	return a.nome < b.nome;
}
int main(){
	int n;
	while(scanf("%d",&n),n){
		vector <aluno> presentes;
		vector<aluno> todos;
		for (int i = 0; i < n; ++i){
			aluno aux;
			cin >> aux.nome >> aux.assinatura;
			todos.push_back(aux);
		}
		int ass;
		scanf("%d",&ass);
		for (int i = 0; i < ass; ++i){
			aluno aux;
			cin >> aux.nome >> aux.assinatura;
			presentes.push_back(aux);	
		}
		sort(presentes.begin(),presentes.end(),comp);
		sort(todos.begin(),todos.end(),comp);
		int qtd = 0;
		for (int i = 0; i < presentes.size(); ++i){
			int erro = 0;
			for(int j = i; j < todos.size(); j++){
				if(presentes[i].nome == todos[j].nome){
					//cout << "i'm here" << endl;
					for (int k = 0; k < presentes[i].assinatura.size(); ++k){
						if(presentes[i].assinatura[k] != todos[j].assinatura[k]){
							erro++;
							if(erro > 1){
								qtd++;
								break;
							}
						}
					}
				}
			}
		}
		cout << qtd << endl;


	}
	return 0;
}