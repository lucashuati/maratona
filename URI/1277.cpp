#include <bits/stdc++.h>

using namespace std;

typedef struct aluno{
	int frequencia;
	string lista_frequencia, nome;
}aluno;

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)	{
		vector<aluno> v;
		int total;
		scanf("%d", &total);
		for (int j = 0; j < total; ++j){
			aluno aux;
			cin >> aux.nome;
			v.push_back(aux);
		}
		for (int j = 0; j < total; ++j){
			cin >> v[j].lista_frequencia;
		}	
		bool first = true;
		for (int j = 0; j < v.size(); ++j){
			int presenca = 0, qtdAulas = 0;
			for (int k = 0; k < v[j].lista_frequencia.size(); ++k){
				if(v[j].lista_frequencia[k] != 'M'){
					qtdAulas++;
				}
				if(v[j].lista_frequencia[k] == 'P'){
					presenca++;
				}
			}
			double freq = (double)presenca/(double)qtdAulas;
			if(freq < 0.75){
				if(first){
					cout << v[j].nome;
					first = false;	
				}
				else{
					cout << " " << v[j].nome;	
				} 
			}
		}
		cout << "\n";

	}
	return 0; 
}