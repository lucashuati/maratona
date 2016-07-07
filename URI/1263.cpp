#include <bits/stdc++.h>

using namespace std;

int main(){
	string line;
	while(getline(cin,line)){
		std::vector<char> v;
		int resp = 0;
		for(int i = 1; i < line.size(); i++){
			if(line[i-1] == ' '){
				char a = tolower(line[i]) - 'a';
				v.push_back(a);
			}else if(i-1 == 0){
				char a = tolower(line[i-1]) - 'a';
				v.push_back(a);			
			}
		}
		bool seg = false;
		for(int i = 0; i < v.size()-1; i++){
			if(v[i] == v[i+1]){
				if(seg){
					continue;
				}else{
					seg = true;
					resp++;
				}
			}else{
				if(seg){
					seg = false;
				}
			}
		}
		cout << resp << endl;
	}
	return 0;
}