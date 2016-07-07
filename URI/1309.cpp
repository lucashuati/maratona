#include <bits/stdc++.h>

using namespace std;

int main(){
	string v,c;
	while(cin >> v >> c){
		int i;
		printf("$");
		if(v.size() < 3){
			i = 0;
		}else if(v.size()%3 == 0){
			i = 0;
		}else if(v.size()%3 == 2){
			i = 2;
			printf("%c%c,", v[0],v[1]);
		}else{
			i = 1;
			printf("%c,", v[0]);
		}
		int k = 1;
		for(;i < v.size(); i++){
			printf("%c",v[i]);
			if(k == 3 && i < v.size()-1){
				printf(",");
				k = 1;
			}
			else 
				k++;
		}
		if(c.size() < 2)
			printf(".0%s\n",c.c_str());
		else
			printf(".%s\n",c.c_str());
	}
	return 0;
}