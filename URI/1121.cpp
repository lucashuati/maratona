#include <bits/stdc++.h>

using namespace std;
char altera(char x, char y){
	if(x == 'E'){
		if(y == 'O'){
			return 'S';
		}
		if(y == 'S'){
			return 'L';
		}
		if(y == 'L'){
			return 'N';
		}
		if(y == 'N'){
			return 'O';
		}
	}
	else{
		if(y == 'N'){
			return 'L';
		}
		if(y == 'L'){
			return 'S';
		}
		if(y == 'S'){
			return 'O';
		}
		if(y == 'O'){
			return 'N';
		}	
	}

}
int main(){
	int N, M, Op;
	char matriz[100][100];
	while(cin >> N >> M >> Op, N + M + Op){
		//cout << N << M << Op << endl;
		/*if(Op == 0 || N == 0 || M == 0){
			break;
		}*/
		char s;	
		int cordInicio[2];
		int qFigurinhas = 0;
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				cin >> matriz[i][j];
				//cout << matriz[i][j];
				if(matriz[i][j] > 'A' && matriz[i][j] < 'Z'){
					cordInicio[0] = i;
					cordInicio[1] = j;
					s = matriz[i][j];
				}
				
			}
			//cout << endl;
		}
		char sentido[] = {'S', 'O' , 'N' , 'L'};
		int o;
		
		//Movimento
		//cout << cordInicio[0] << " " << cordInicio[1] <<endl;
		for(int i = 0; i < Op; i++){
			char op;
			cin >> op;
			//scanf("%c", &op);
			switch(op){
				case 'D':
					s = altera(op,s);
					//cout << s << endl;
					break;
				case 'E':
					s = altera(op,s);
					//cout << s << endl;
					break;
				case 'F':
					if(s == 'S'){
						cordInicio[0]++;
						if(cordInicio[0] == N || matriz[cordInicio[0]][cordInicio[1]] == '#'){
							cordInicio[0]--;
						}
					}else{
						if(s == 'O'){
							cordInicio[1]--;
							if(cordInicio[1] == -1 || matriz[cordInicio[0]][cordInicio[1]] == '#'){
								cordInicio[1]++;
							}
						}else{
							if(s == 'N'){
								cordInicio[0]--;
								if(cordInicio[0] == -1 || matriz[cordInicio[0]][cordInicio[1]] == '#'){
									cordInicio[0]++;
								}
							}else{
								if(s == 'L'){
									cordInicio[1]++;
									if(cordInicio[1] == M || matriz[cordInicio[0]][cordInicio[1]] == '#'){
										cordInicio[1]--;
									}
								}
							}

						}

					}
					//cout << cordInicio[0] << " " << cordInicio[1] <<endl;
					if(matriz[cordInicio[0]][cordInicio[1]] == '*'){
						qFigurinhas++;
						matriz[cordInicio[0]][cordInicio[1]] = '.';
					}
					break;
			}

		}
		cout << qFigurinhas << endl;
	}
	return 0;
}