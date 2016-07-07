#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int quantidade(unsigned long long n){
	int qtd = 1;

	while(n/10 != 0){
		n = n/10;
		qtd++;
	}

	return qtd;
}


int main(){

	int N, num; 	
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		
		cin >> num;
		unsigned long long matriz[20][20], maior[20];
		for (int f = 0; f < num; ++f){
			maior[f] = 0;
		}
		
		for(int j = 0; j < num; j++){
			for(int k = 0; k < num; k++){
				cin >> matriz[j][k];
				matriz[j][k] *= matriz[j][k];
				if(matriz[j][k] > maior[k])
					maior[k] = matriz[j][k];
			}
		}

		int e = 1, qtdM;
		cout << "Quadrado da matriz #" <<(i + 4)<<":" << endl;
		for(int j = 0; j < num; j++){
			for(int k = 0; k < num; k++){
				qtdM = quantidade(maior[k]);
				e = qtdM - quantidade(matriz[j][k]);
				while(e > 0){
					cout << " ";
					e--;
				}
				cout << matriz[j][k];	
				if(k+1 != num)
					cout << " ";
			}
			cout << endl;
		}
		if(i != N-1)
			cout << endl;
	}
	

	return 0;
}