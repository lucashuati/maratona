#include <bits/stdc++.h>

using namespace std;

int main(){
	int va;
	while(scanf("%d",&va),va){
		stack<int> a,b;
		vector<int> v;
		for(int i = 0; i < va; i++){
			int aux;
			scanf("%d",aux);
			if(!aux){
				break;
				printf("\n");
			}
			v.push_back(aux);
		}
		for (int i = 0,j = 1; j <= va;){
			if(!a.empty() && v[i] == a.top()){
				a.pop();
				i++;
			}else{
				a.push(j);
				j++;
			}
		}
		if(a.empty())
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}