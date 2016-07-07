#include <bits/stdc++.h>

using namespace std;

int main(){
	int A , B;
	vector<int> X , Y;
	while(cin >> A >> B, A+B){	
		X.clear();
		Y.clear();
		int aux;
		for (int i = 0; i < A; ++i){
			cin >> aux;
			X.push_back(aux);
		}
		for (int i = 0; i < B; ++i){
			cin >> aux;
			Y.push_back(aux);
		}
		int cont = 0;
		bool dif;
		sort(X.begin(),X.end());
		sort(Y.begin(),Y.end());
		for(int i = 0; i < Y.size(); i++){
			for(int j = i+1; j < Y.size(); j++){
				if(Y[i] == Y[j]){
					Y.erase(Y.begin()+j);
					j--;
				}
			}
		}
		for(int i = 0; i < X.size(); i++){
			for(int j = i+1; j < X.size(); j++){
				if(X[i] == X[j]){
					X.erase(X.begin()+j);
					j--;
				}
			}
		}

		for(int i = 0; i < X.size(); i++){
			cout << Y[i] << " ";	
		}

		for(int i = 0; i < X.size(); i++){
			dif = false;
			for(int j = 0; j < Y.size(); j++){
				if(X[i] == Y[j]){
					dif = true;
					break;
				}
			}
			if(!dif)
				cont++;
		}
		cout << cont << endl;

	}
	return 0;
}