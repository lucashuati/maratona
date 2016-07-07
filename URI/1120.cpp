#include <bits/stdc++.h>

using namespace std;

int main(){
	char c;
	string str;
	while(cin >> c >> str, c != '0' && str != "0"){
		string r = "";
		for(int i = 0; i < str.size(); i++){
			if(str[i] != c){
				r += str[i];
			}
		}
		bool f = false;
		int k = 0;
		for(int i = 0; i < r.size(); i++){
			if(r[i] != '0'){
				k = i;
				f = true;
				break;
			}
		}
		if(!f){
			k = r.size()-1;
		}
		//cout << k << endl;
		//cout << k << " " << r.size()-k << endl;
		if(r.size() == 0){
			r += '0';
		}else{
			r = r.substr(k,r.size()-k);	
		}
		//r = r.substr(k,r.size()-k);
		cout << r << endl;
	}
	return 0;
}