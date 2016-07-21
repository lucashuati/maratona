#include <bits/stdc++.h>

using namespace std;

string minusculo(string a){
	for(int i; i < a.size(); i++){
		a[i] = tolower(a[i]);
	}
	return a;
}

int main(){
	char c;
	int jogos = 0, palavras = 0, cont = 0;
	string p;
	set<string> ms;
	vector<string> v;
	while(scanf("%c",&c) != EOF){
		if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
			p += c;
		}else{
			if(p == "BULLSHIT"){
				jogos++;
				palavras += ms.size();
				ms.clear();
				p.clear();
			}
			else if(p.size() != 0){
				ms.insert(minusculo(p));
			}
			p.clear();
		}
	}
	if(p == "BULLSHIT"){
		jogos++;
		palavras += ms.size();
		ms.clear();
		p.clear();
	}else if(p.size() != 0){
		ms.insert(minusculo(p));
	}
	p.clear();
	int menor = min(jogos,palavras);
	while(menor > 1){
		if(jogos % menor == 0 && palavras % menor == 0){
			jogos /= menor;
			palavras /= menor;
		}
		menor--;
	}
	printf("%d / %d\n",palavras,jogos);
  return 0;
}
