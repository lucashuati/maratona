#include <bits/stdc++.h>

using namespace std;

int main(){
	int A, C;
	while(scanf("%d%d",&A,&C), A+C){
		vector<int> h;
		for (int i = 0; i < C; ++i){
			int aux;
			scanf("%d",&aux);
			h.push_back(aux);
		}
		int laser_on = 0;
		int h_atual = A;
		for (int i = 0; i < h.size(); ++i){
	 		if(h_atual > h[i]){
	 			laser_on += h_atual-h[i];
	 			h_atual = h[i];
		 	}else{
		 		h_atual = h[i];
		 	}
		}
		 printf("%d\n",laser_on);
	}
	return 0;
}