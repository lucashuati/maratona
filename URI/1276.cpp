#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	
	while(getline(cin, str)){
		sort(str.begin(),str.end());
		char intervalo[2] = {str[0],str[0]};
		//cout << str << endl;
		if(intervalo[0] == ' '){
			for(int i = 0; i < str.size(); i++){
				if(str[i] != ' '){
					intervalo[0] = str[i];
					intervalo[1] = str[i];
					break;
				}
			}
		}
		if(intervalo[0] == ' ' || str.size() == 0)
			printf("\n");
		else{
			bool first = true;		
			//cout << intervalo[0] << endl;
			for(int i = 0; i < str.size()-1; i++){
				if(str[i] == ' '){
					continue;
				}
				if(str[i] == str[i+1] || str[i] == str[i+1]-1){
					intervalo[1] = str[i+1];
				}else{
					if(first){
						printf("%c:%c",intervalo[0],intervalo[1]);
						first = false;
					}else{
						printf(", %c:%c",intervalo[0],intervalo[1]);
					}
					intervalo[0] = str[i+1];
					intervalo[1] = str[i+1];
				}
			}
			if(first){
				printf("%c:%c\n",intervalo[0],intervalo[1]);
				first = false;
			}else{
				printf(", %c:%c\n",intervalo[0],intervalo[1]);
			}
		}
			
	}
	return 0;
}