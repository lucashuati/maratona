#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	scanf("%d\n",&N);
	map<string,string> mm;
	while(N--){
		string aux1,aux2;
		getline(cin,aux1);
		getline(cin,aux2);
		mm[aux1] = aux2;
	}
	int Q;
	scanf("%d\n",&Q);
	std::vector<string> v;
	while(Q--){
		string aux;
		getline(cin,aux);
		v.push_back(aux);
	}

	for (int i = 0; i < v.size(); ++i){
		cout << mm[v[i]] << endl;
	}
	return 0;
}