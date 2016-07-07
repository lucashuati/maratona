#include <bits/stdc++.h>

using namespace std;

int main(){
	string line;
	while(getline(cin,line)){
		bool upperCase= false;
		for (int i = 0; i < line.size(); ++i){
			if(line[i] == ' ')
				printf(" ");
			else{
				if(!upperCase){
					printf("%c", toupper(line[i]));
					upperCase = true;
				}else{
					printf("%c", tolower(line[i]));
					upperCase = false;
				}
			}
		}
		printf("\n");
	}
	return 0;
}