#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	string line;
	scanf("%d", &cases);
	getline(cin,line);
	for (int i = 0; i < cases; ++i){
		getline(cin,line);
		int metade = line.size()/2;
		metade--;
		for(int j = metade; j >= 0; j--){
			printf("%c",line[j]);
		}
		for(int j = line.size()-1; j > metade; j--){
			printf("%c",line[j]);
		}
		printf("\n");
	}
	return 0;
}