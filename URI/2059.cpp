#include <bits/stdc++.h>

using namespace std;

int main(){
	int p , j1,j2,r,a;
	cin >> p >> j1 >> j2 >> r >> a;
	if(r+a == 0){
		if(p){
			if((j1+j2)%2 == 0){
				cout << "Jogador 1 ganha!" << endl;
			}else{
				cout << "Jogador 2 ganha!" << endl;
			}
		}else{
			if((j1+j2)%2 == 0){
				cout << "Jogador 2 ganha!" << endl;
			}else{
				cout << "Jogador 1 ganha!" << endl;
			}
		}
	}else{
		if(r == 1 && a == 0){
			cout << "Jogador 1 ganha!" << endl;
		}else if(r == 1 && a == 1){
			cout << "Jogador 2 ganha!" << endl;
		}else if(r == 0 && a == 1){
			cout << "Jogador 1 ganha!" << endl;
		}
	}
	return 0;
}