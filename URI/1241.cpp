#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		string a,b;
		cin >> a >> b;
		if(b.size() > a.size()){
			cout << "nao encaixa" << endl;
		}else{
			string aux = a.substr(a.size()-b.size(),b.size());
			if(aux == b){
				cout << "encaixa" << endl;	
			}else{
				cout << "nao encaixa" << endl;
			}
		}
	}
	return 0;
}