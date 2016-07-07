#include <bits/stdc++.h>
using namespace std;

map<string, int> table;
map<int,string> table2;
vector<bool> visitados;
vector<bool> visitadosA;
vector<int> preRequisitos;
vector<int> lista[121];
void dfs(int v){
	visitados[v] = true;
	//cout << "estou em: " << table2[v] << endl;	
	for(int i = 0; i < lista[v].size(); i++){
		if(visitados[lista[v][i]]){			
			//cout << "entrei para retirar " << table2[lista[v][i]] << endl;
			for(int j = 0; j < preRequisitos.size(); j++){
				if(preRequisitos[j] == lista[v][i]){
					preRequisitos.erase(preRequisitos.begin()+j);
					j--;
					//cout << "retirando: "<< table2[preRequisitos[i]] << endl;
					break;
				}
			}
		}else{
			dfs(lista[v][i]);
		}
	}
}

int main(){
	int ct;
	scanf("%d", &ct);
	while(ct > 0){
		table.clear();
		table2.clear();
		visitados.clear();
		int n;
		scanf("%d", &n);
		vector<string> vertices;
		visitados.push_back(false);

		for(int i = 1; i < n; i++){
			lista[i].clear();
		}
		table[" "] = 0;
		table2[0] = " ";
		for (int i = 1; i <= n; ++i){
			string x;
			cin >> x;
			table[x] = i;
			table2[i] = x;
			vertices.push_back(x);
			visitados.push_back(false);	
		}
		visitadosA = visitados;
		scanf("%d", &n);
		int x;
		for (int i = 0; i < n; ++i){
			string v;
			int c;
			cin >> v;
			scanf("%d", &c);
			for (int j = 0; j < c; ++j){
				string a;
				cin >> a;
				lista[table[v]].push_back(table[a]);
			}
		}

		sort(vertices.begin(), vertices.end());

		for(int i = 0; i < vertices.size(); i++){
			int cont = lista[table[vertices[i]]].size();
			preRequisitos.clear();
			for(int j = 0; j < cont; j++){
				preRequisitos.push_back(lista[table[vertices[i]]][j]);
			}
			visitados = visitadosA;
			//cout << vertices[i] << endl;
			dfs(table[vertices[i]]);
			cont = preRequisitos.size();
			if(cont == 0)
				continue;
			cout << vertices[i] << " " << cont;
			vector<string> preRequisitosS;
			preRequisitosS.clear();
			for(int j = 0; j < cont; j++){
				preRequisitosS.push_back(table2[preRequisitos[j]]);
			}
			sort(preRequisitosS.begin(), preRequisitosS.end());
			for(int j = 0; j < cont; j++){
				cout << " " << preRequisitosS[j];
			} 
			cout << endl;
		}
		ct--;
	}
}	