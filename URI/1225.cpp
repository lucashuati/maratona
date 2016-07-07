#include <bits/stdc++.h>

using namespace std;
int procuraMaior(vector<int> v){
	int maior = v[0], pos = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i] > maior){
			maior = v[i];
			pos = i;
		}
		
	}
	return pos;
}

int procuraMenor(vector<int> v){
	int menor = v[0], pos = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i] < menor){
			menor = v[i];
			pos = i;
		}
	}
	return pos;
}
int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		vector<int> v;
		int soma = 0;
		while(n--){
			int aux;
			scanf("%d",&aux);
			v.push_back(aux);
			soma += aux;
		}
		int cont = 1;
		int a = procuraMaior(v);
		int b = procuraMenor(v);
		int media = soma/v.size();
		if((soma)%v.size()){
			cout << "-1" << endl;
		}else{
			for(int i = 0; i < v.size(); i++){
				if(v[i] < media){
					// cout << v[i] << " ";
					// cout << media << endl;
					cont+= media-v[i];
				}
			}
			cout << cont << endl;	
		}
		
		
	}
	return 0;
}