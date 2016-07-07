#include <bits/stdc++.h>

using namespace std;

int main(){
	int l;
	scanf("%d ",&l);
	while(l--){
		string line, r = "";
		getline(cin,line);
		if(line[0] >= 'a' && line[0] <= 'z')
			r += line[0];
		for(int i = 0; i < line.size(); i++){
			if(line[i] == ' ' && i+1 < line.size()){
				if(line[i+1] >= 'a' && line[i+1] <= 'z'){
					r += line[i+1];
				}
			}
		}
		cout << r << endl;
	}
	return 0;
}