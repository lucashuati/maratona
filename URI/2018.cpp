#include <bits/stdc++.h>

using namespace std;

typedef struct pais{
	int ouro,prata,bronze;
	string nome;
}pais;

std::vector<pais> v;
int pos(string nome){
	for (int i = 0; i < v.size(); ++i){
		if(v[i].nome == nome)
			return i;
	}
	return -1;
}

bool comp(pais a, pais b){
	if(a.ouro == b.ouro){
		if(a.prata == b.prata){
			if(a.bronze == b.bronze){
				return a.nome < b.nome;
			}else
				return a.bronze > b.bronze;
		}else
			return a.prata > b.prata;	
	}else
		return a.ouro > b.ouro;
}

int main(){
	string str;
	
	while(getline(cin,str)){
		for (int i = 0; i < 3; ++i){
			getline(cin,str);
			int p = pos(str); 
			//OURO
			if(i == 0){
				if(p == -1){
					pais aux;
					aux.nome = str;
					aux.ouro = 1;
					aux.prata = 0;
					aux.bronze = 0;
					v.push_back(aux);
				}else{
					v[p].ouro++;
				}
			}
			//PRATA
			if(i == 1){
				if(p == -1){
					pais aux;
					aux.nome = str;
					aux.ouro = 0;
					aux.prata = 1;
					aux.bronze = 0;
					v.push_back(aux);
				}else{
					v[p].prata++;
				}
			}
			//BRONZe
			if(i == 2){
				if(p == -1){
					pais aux;
					aux.nome = str;
					aux.ouro = 0;
					aux.prata = 0;
					aux.bronze = 1;
					v.push_back(aux);
				}else{
					v[p].bronze++;
				}
			}

		}
	}
	sort(v.begin(),v.end(),comp);
	printf("Quadro de Medalhas\n");
	for (int i = 0; i < v.size(); ++i){
		cout << v[i].nome;
		printf(" %d %d %d\n",v[i].ouro,v[i].prata,v[i].bronze);
	}
	return 0;
}