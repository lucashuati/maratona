#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	scanf("%d",&N);
	string senha;
	int result;
	for(int i = 0; i < N; i++){
		cin >> senha;
		result = 1;
		for(int j = 0; j < senha.size(); j++){
			if(senha[j] == 'a' || senha[j] == 'A' || senha[j] == 'e' || senha[j] == 'E' || senha[j] == 'i' || senha[j] == 'I' || senha[j] == 'o' || senha[j] == 'O' || senha[j] == 's'|| senha[j] == 'S')
				result *= 3;
			else
				result *= 2;
		}

		printf("%d\n", result);

	}

    return 0;
}