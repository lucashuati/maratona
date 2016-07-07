#include <bits/stdc++.h>

using namespace std;


typedef struct proc{
	int t,c;
}proc;

bool comp1(proc a, proc b){
	if(a.t == b.t)
		return a.c > b.c;
	else	
		return a.t > b.t;
}

bool comp2(proc a, proc b){
	if(a.c == b.c)
		return a.t > b.t;
	else	
		return a.c > b.c;
}
int main(){
	std::vector<proc> tempo;
	std::vector<proc> ciclos;
	int n;
	while(scanf("%d",&n) != EOF){
		for(int i = 1; i <= n; i++){
			proc aux;
			scanf("%d%d",&aux.t,&aux.c);
			tempo.push_back(aux);
		}
		make_heap(tempo.begin(),tempo.end(),comp1);
		long long int tempoAtual = 1;
		long long int dif = 0;
		while(tempo.size() > 0){
			if(tempo.front().t > tempoAtual){
				tempoAtual = tempo.front().t+tempo.front().c;
				pop_heap(tempo.begin(),tempo.end(),comp1);tempo.pop_back();
				//cout << tempoAtual << " caso 1" <<endl;
			}else{
				ciclos = tempo;
				make_heap(ciclos.begin(),ciclos.end(),comp2);
				if(ciclos.front().t <= tempoAtual){
					dif+= tempoAtual - ciclos.front().t;
					tempoAtual += ciclos.front().c;
					pop_heap(ciclos.begin(),ciclos.end(),comp2);ciclos.pop_back();
					tempo = ciclos;
					//cout << tempoAtual << " caso 2" <<endl;
				}else{
					dif+= tempoAtual - tempo.front().t;
					tempoAtual += tempo.front().c;
					pop_heap(tempo.begin(),tempo.end(),comp1);tempo.pop_back();
					//cout << tempoAtual << " caso 3" <<endl;
				}
			}
		}
		cout << dif << endl;
	}
	return 0;
}