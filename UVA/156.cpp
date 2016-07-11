#include <bits/stdc++.h>

using namespace std;

int main(){
	map <string,string> mm;
	map <string,int> ms;
	string str;
	while(cin >> str){
		//cout << str << " ";
		if(str == "#")
			break;
		string aux = str;
		for(int i = 0; i < str.size(); i++){
			str[i] = tolower(str[i]);
		}
		sort(str.begin(),str.end());
		mm[str] = aux;
		ms[str]++;
	}
	vector<string> v;
 	for(map<string,int>::iterator it = ms.begin(); it != ms.end(); it++){
 		if(it->second == 1){
 			//cout << it->first << endl;
 			v.push_back(mm[it->first]);
 		}
	}
	sort(v.begin(),v.end());
	for(int i = 0; i < v.size();i++){
		cout << v[i] << endl;
	}
	return 0;
}