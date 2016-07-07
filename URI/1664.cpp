#include <bits/stdc++.h>

using namespace std;
std::vector<string> v;

string minusculo(string a){
	for(int i; i < a.size(); i++){
		if(a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
	}
	return a;
}
int compara(vector<string> v){
	int cont = 0;

	for(int i = 0; i < v.size(); i++){
		for(int j = i+1; j+1 < v.size(); j++){
			if(v[i] == v[j])
				cont++;
		}
	}
	return cont;
}
int main(){
	char c;
	int jogos = 0, palavras = 0, cont = 0;
	string p;
	while(scanf("%c",&c) != EOF){
		if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
			p += c;
		}else{
			if(p.size() != 0)
				cont++;
			if(p == "BULLSHIT"){
				cont--;
				jogos++;
				cont -= compara(v);
				palavras += cont;
				v.clear();
				p.clear();
				cont = 0;
			}else{
				if(p.size() != 0)
					v.push_back(minusculo(p));
				p.clear();
			}
		}
	}
	if(p.size() != 0)
		cont++;
	if(p == "BULLSHIT"){
		cont--;
		jogos++;
		cont -= compara(v);
		palavras += cont;
		v.clear();
		p.clear();
	}else{
		v.push_back(minusculo(p));
		p.clear();
	}
	
	int maior = min(jogos,palavras);
	while(maior > 1){
		if(jogos % maior == 0 && palavras % maior == 0){
			jogos /= maior;
			palavras /= maior;
		}
		maior--;
	}
	printf("%d / %d\n",palavras,jogos);
    return 0;
}