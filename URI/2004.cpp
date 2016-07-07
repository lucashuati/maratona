#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	scanf("%d",&cases);
	while(cases--){
		int v[101] = {0};
		int q;
		scanf("%d",&q);
		vector<int> t;
		while(q--){
			int a, b;
			scanf("%d%d",&a,&b);
			
			if(v[a] == 0)
				t.push_back(a);
			if(v[a] < 10 ||  v[a] > 100){
				if(b < 10 || b > 100){
					v[a] = max(v[a],b);
				}else{
					v[a] = b;
				}
			}else{
				if(b > 10 && b < 100){
					v[a] = max(v[a],b);
				}
			}
			
		}
		int soma = 0;
		for(int i =0; i < t.size(); i++){
			soma+=v[t[i]];
		}
		cout << soma << endl;
		
	}
	return 0;
}