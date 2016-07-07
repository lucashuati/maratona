#include <bits/stdc++.h>

using namespace std;

int main(){
	int r;
	while(cin >> r,r){
		vector<int> v1,v2;
		int t1 = 0,t2 = 0;
		for(int i = 0; i < r; i++){
			int aux;
			scanf("%d",&aux);
			v1.push_back(aux);
			t1 += aux;
		}
		for(int i = 0; i < r; i++){
			int aux;
			scanf("%d",&aux);
			v2.push_back(aux);
			t2 += aux;
		}
		int rb1 = r;
		int rb2 = r;
		for(int i = 0; i < r-2; i++){
			if(v1[i] == v1[i+1] && v1[i] == v1[i+2]){
				rb1 = min(rb1,i);
			}
			if(v2[i] == v2[i+1] && v2[i] == v2[i+2]){
				rb2 = min(rb2,i);
			}
		}
		//printf("%d %d\n",t1,t2);
		if(rb1 < rb2){
			t1+=30;
		}else if(rb1 > rb2){
			t2+=30;
		}

		if(t1 == t2){
			printf("T\n");
		}else if(t1 > t2){
			printf("M\n");
		}else{
			printf("L\n");
		}
	}
	return 0;
}