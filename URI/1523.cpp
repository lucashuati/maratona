#include <bits/stdc++.h>

using namespace std;

typedef struct c{
	int t,car, chegando;
}c;

bool comp(c a, c b){
	if(a.t == b.t){
		return a.chegando < b.chegando;
	}else{
		return a.t < b.t;
	}
}
int main(){
	int n,k;
	while(scanf("%d%d ",&n,&k), n+k){
		vector<c> v;
		for(int i = 0; i < n; i++){
			c aux;
			int ch,s;
			scanf("%d%d",&ch,&s);
			aux.t = ch;
			aux.car = i;
			aux.chegando = 1;
			
			v.push_back(aux);
			aux.t = s;
			aux.car = i;
			aux.chegando = 0;
			v.push_back(aux);
		}
		bool sim = true;
		sort(v.begin(),v.end(),comp);
		stack<int> est;
		for(int i = 0; i < v.size();i++){
			//printf("%d ",v[i].car);
			if(v[i].chegando == 1){
				if(est.size() < k){
					est.push(v[i].car);
				}else{
					sim = false;
					break;
				}
			}else{
				if(est.top() == v[i].car){
					est.pop();
				}else{
					sim = false;
					break;
				}
			}
		}
		if(sim){
			printf("Sim\n");
		}else{
			printf("Nao\n");
		}
	}
	return 0;
}