#include <bits/stdc++.h>

using namespace std;

int main(){
	int c;
	scanf("%d",&c);
	while(c--){
		int k;
		scanf("%d",&k);
		std::vector<int> v;
		for(int i = 0; i<k; i++){
			int aux;
			scanf("%d",&aux);
			v.push_back(aux);
		}

		bool trocou = false;
		int trocas = 0;
		for(int i = 0; i < k; i++){
			for(int j = 0; j < k-1; j++){
				if(v[j] > v[j+1]){
					trocas++;
					int aux = v[j];
					v[j] = v[j+1];
					v[j+1] = aux;
					trocou = true;
				}
			}
			if(!trocou)
				break;
		}
		printf("Optimal train swapping takes %d swaps.\n",trocas );
		//cout << trocas << endl;
	}
	return 0;
}