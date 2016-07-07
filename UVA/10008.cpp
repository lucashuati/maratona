#include <bits/stdc++.h>

using namespace std;
typedef struct Letra{
	char c;
	int qtd;
}letra;

bool comp(letra a, letra b){
	if(a.qtd == b.qtd)
		return a.c < b.c;
	else{
		return a.qtd > b.qtd;
	}
}
int main(){
	int count;
	string frase;
	map<char, int> mapa;
	scanf("%d", &count);
	for(int i = 0; i <= count; ++i){	
		frase.clear();
		getline(cin, frase);
		for(int j = 0; j < frase.size(); j++){
			if(frase[j] >= 'a' && frase[j] <= 'z' || frase[j] >= 'A' && frase[j] <= 'Z'){
				char c = toupper(frase[j]);
				if(mapa.count(c) == 0){
					mapa.insert(pair<char,int>(c,1));
				}else{
					mapa[c]++;
				}
			}
		}
	}
	std::vector<letra> v;
	for (std::map<char,int>::iterator it = mapa.begin(); it != mapa.end(); ++it){
		letra a;
		a.c = it->first;
		a.qtd = it->second;
		v.push_back(a);
	}

	sort(v.begin(),v.end(),comp);

	for(int i = 0; i < v.size(); ++i){
		cout << v[i].c << " " << v[i].qtd << endl; 	
	} 
	
	return 0;
}
