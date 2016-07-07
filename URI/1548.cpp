#include <bits/stdc++.h>

using namespace std;

typedef struct a{
	int pos;
	int nota;	
}al;
bool comp(al a, al b){
	if(a.nota == b.nota)
		return a.pos < b.pos;
	else
		return a.nota > b.nota;
}
int main(){
	int cases;
	scanf("%d",&cases);
	while(cases--){
		vector<al> v;
		int n;
		scanf("%d",&n);
		for (int i = 0; i < n; ++i){
			al aux;
			scanf("%d",&aux.nota);
			aux.pos = i;
			v.push_back(aux);
		}
		sort(v.begin(),v.end(),comp);
		int cont = 0;
		for (int i = 0; i < v.size(); ++i){
			//cout << v[i].nota << " ";
			if(i == v[i].pos)
				cont++;
		}
		printf("%d\n",cont);
	}
	return 0;
}