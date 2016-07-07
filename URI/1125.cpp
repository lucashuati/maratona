#include <bits/stdc++.h>

using namespace std;

typedef struct piloto{
	int pont, id;
	vector<int> pos;
}piloto;

bool comp(piloto a, piloto b){
	if(a.pont == b.pont){
		return a.id < b.id;
	}
	return a.pont > b.pont;
}
int main(){
	int g,p;
	while(cin >> g >> p, g+p){
		vector <piloto> v(p);
		for(int i = 0; i < g; i++){
			for(int j = 0; j < p; j++){
				piloto aux;
				cin >> aux.id;
				v[j].pos.push_back(aux.id);
				v[j].pont = 0;
				v[j].id = j+1;
			}	
		}
		int s;
		cin >> s;
		for(int i = 0; i < s; i++){
			std::vector<int> score;
			int l;
			cin >> l;
			for(int j = 0; j < l; j++){
				int aux;
				cin >> aux;
				score.push_back(aux);
			}
			vector<piloto> aux = v;
			for(int j = 0; j < aux.size(); j++){
				//cout << aux[j].id << ": ";
				for(int k = 0; k < aux[j].pos.size(); k++){
					//cout << aux[j].pos[k] << " ";
					if(aux[j].pos[k] <= l){
						aux[j].pont += score[aux[j].pos[k]-1];
					}
				}
				//cout << " pontos: " <<aux[j].pont <<endl;	 
			}
			sort(aux.begin(),aux.end(),comp);
			int maior = aux[0].pont;
			cout << aux[0].id;
			for(int j = 1; j < aux.size();j++){
				if(aux[j].pont != maior){
					break;
				}else{
					cout << " " << aux[j].id;
				}
			}
			cout << endl;
		}

	}
	return 0;
}