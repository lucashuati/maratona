#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	string dieta, almoco, cafe, conjunto;
	getline(cin,dieta);
	while(n > 0){
		getline(cin,dieta);
		getline(cin,cafe);
		getline(cin,almoco);
		conjunto = almoco + cafe;
		size_t found;
		bool cheater = false;
		sort(dieta.begin(),dieta.end());
		sort(conjunto.begin(),conjunto.end());
		for (int i = 0; i < conjunto.size(); ++i){
			string search;
			search += conjunto[i];
			found = dieta.find(search); 
			if(found == string::npos){
				printf("CHEATER");
				cheater = true;
				break;
			}
		}

		if(!cheater){
			for (int i = 0; i < dieta.size(); ++i){
				found = conjunto.find_first_of(dieta[i]);
				if(found == string::npos){
					printf("%c",dieta[i]);
				}
			}
		}
		printf("\n");
		n--;
	}
	return 0;
}