#include <bits/stdc++.h>

using namespace std;

typedef struct birth{
	string nome;
	int d,m,a;
}birth;

bool comp(birth a, birth b){
	if(a.a == b.a){
		if(a.m == b.m){
			return a.d < b.d;
		}else{
			return a.m < b.m;
		}
	}else{
		return a.a < b.a;		
	}
}
int main(){
	int n;
	scanf("%d",&n);
	std::vector<birth> v;
	while(n--){
		birth aux;
		cin >> aux.nome;
		scanf("%d%d%d",&aux.d,&aux.m,&aux.a);
		v.push_back(aux);
	}
	sort(v.begin(),v.end(),comp);
	cout << v[v.size()-1].nome << endl << v[0].nome << endl;
	return 0;
}