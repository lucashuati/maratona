#include <bits/stdc++.h>

using namespace std;
#define TAM 9

int main(){

	int piramide[TAM][TAM];
	int N;
	scanf("%d", &N);
	while(N != 0){
		for (int i = 0; i < TAM; i += 2){
			for (int j = 0; j <= i; j += 2){
				if(i%2 == 0 && j%2 == 0)
					scanf("%d", &piramide[i][j]);	
			}
		}
		
		//Prencher a ultima linha
		for(int i = 1; i < TAM; i += 2){
			piramide[8][i] = (piramide[6][i-1] - piramide[8][i-1] - piramide[8][i+1]) / 2; 
		}

		for (int i = 7; i >= 0; --i){
			for (int j = 0; j <= i; ++j){
				piramide[i][j] = piramide[i+1][j] + piramide[i+1][j+1]; 
			}
		}
		
		for (int i = 0; i < TAM; i++){
			for (int j = 0; j <= i; j++){
					cout << piramide[i][j];
					if(j != i)
						cout << " ";	
			}
			cout << endl;
		}



		N--;

		
	}

	return 0;
}