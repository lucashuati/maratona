#include <bits/stdc++.h>

using namespace std;

int main(){
	string msg;
	while(getline(cin,msg)){
		map<char,int> letras;
		vector<char> l;
		int j = 1;
		for (char i = 'a'; i <= 'z'; ++i){
			int ind = (j + 12)%26;
			letras[i] = ind;
			l.push_back(i);
			j++;
		}
		for(int i = 0; i < msg.size(); i++){
			if(msg[i] >= 'a' && msg[i] <= 'z'){
				int u = letras[msg[i]];
				printf("%c",l[u]);
			}else{
				if(msg[i] >= 'A' && msg[i] <= 'Z'){
					char c = tolower(msg[i]);
					int u = letras[c];
					c = toupper(l[u]);
					printf("%c",c);
				}
				else{
					printf("%c",msg[i]);
				}
			}
		}	
		printf("\n");
	}
	
	return 0;
}