#include <bits/stdc++.h>

using namespace std;

typedef struct tt{
	char c;
	int qtd;
}cc;

int key(char c){
	return c - 'a';
}

bool comp(cc a, cc b){
	if(a.qtd == b.qtd){
		return a.c < b.c;
	}
	return a.qtd > b.qtd;
}
int main(){
	int c;
	cin >> c;
	getchar();
	while(c--){
		string str;
		getline(cin,str);
		vector<cc> v(26);
		bool f = true;
		for(int i = 0; i < str.size(); i++){
			if(islower(str[i]) || isupper(str[i])){
				//cout << str[i];
				f = false;
				v[key(tolower(str[i]))].c = tolower(str[i]);
				v[key(tolower(str[i]))].qtd++;
			}
		}
		sort(v.begin(),v.end(),comp);
		// for(int i = 0; i < v.size(); i++){
		// 	cout << v[i].c << " - " << v[i].qtd << endl;
		// }
		if(!f){
			int maior = v[0].qtd;
			cout << v[0].c;
			for(int i = 1; i < v.size(); i++){
				if(maior != v[i].qtd){
					break;
				}else{
					cout << v[i].c; 
				}
			}
		}
		cout << endl;

	}
	return 0;
}