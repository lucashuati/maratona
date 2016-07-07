#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	while(cin >> str){
		int l;
		cin >> l;
		int cont = 0, resp = 0;
		//cout << str<< endl;	
		for(int i = 0; i < str.size();i++){
			if(str[i] == 'R'){
				if(cont < l){
					cont++;
				}else{
					cont = 1;
					resp++;
				}
			}else{
				if(cont > 0){
					resp++;
				}
				cont = 0;
				resp++;
			}
		}
		if(cont > 0){
			resp++;
		}
		cout << resp << endl;
	}
	return 0;
}