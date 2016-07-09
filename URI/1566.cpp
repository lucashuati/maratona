#include <bits/stdc++.h>

using namespace std;

int main(){
	int c;
	scanf("%d",&c);
	while(c--){
		int n;
		scanf("%d",&n);
		std::vector<int> v(211,0);
		for(int i = 0; i < n ; i++){
			int aux;
			scanf("%d",&aux);
			v[aux-20]++;
		}
		bool f = true;
		for(int i = 0; i < 211; i++){
			for(int j = 0; j < v[i]; j++){
				if(f){
					printf("%d",i+20);
					f = false;
				}else{
					printf(" %d",i+20);
				}
			}
		}
		cout << endl;
	}
	return 0;
}