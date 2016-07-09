#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	while(cin >> str){
		int op = 1;
		string str1 = "";
		list<string> res;
		for(int i = 0; i < str.size(); i++){
			if(str[i] == '['){
				if(op == 1){
					res.push_front(str1);
				}else if(op == 2){
					res.push_back(str1);
				}
				op = 1;
				str1.clear();
			}else if(str[i] == ']'){
				if(op == 1){
					res.push_front(str1);
				}else if(op == 2){
					res.push_back(str1);
				}
				op = 2;
				str1.clear();
			}else{
				str1+= str[i];
				//cout << str1 << "1" << endl;
			}
		}
		if(op == 1){
			res.push_front(str1);
		}else{
			res.push_back(str1);
		}
		//cout << res.size() << endl;
		for(list<string>::iterator it = res.begin(); it != res.end(); it++){
			//cout << "111";
			string str2 = *it;
			if(str2.size() != 0)
				cout << *it;
		}
		cout << endl;
	}
	return 0;
}