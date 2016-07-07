#include <bits/stdc++.h>

using namespace std;

typedef struct Aluno{
	char tam;
	string cor;
	string nome;
}aluno;

bool compare(aluno a, aluno b){
	if(a.cor == b.cor){
		if(a.tam == b.tam){
			return (a.nome < b.nome);
		}else{
			return (a.tam < b.tam);
		}
	}else{
		return (a.cor < b.cor);
	}
}

int main(){
    int N;
    cin >> N;
    string b;
    getline(cin,b);
    cout << b;
    
    /*while(scanf("%d",&N),N){
    	vector<aluno> v;
    	aluno a;
    	
    	
    	for(int i = 0; i < N; i++){
    		char c;
    		cout << b;	
    		//cin >> a.cor;
    		//cin >> a.tam;
    		//v.push_back(a);
    	}
    	//sort(v.begin(),v.end(),compare);

    }*/

    return 0;
}