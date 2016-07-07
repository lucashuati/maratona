#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		string str;
		cin >> str;
		if(str.size() > 3){
			printf("3\n");
		}else{
			if(str[1] == 'w' && str[2] == 'o'){
				printf("2\n");
			}else if(str[0] == 't' && str[2] == 'o'){
				printf("2\n");
			}else if(str[0] == 't' && str[1] == 'w'){
				printf("2\n");
			}else{
				printf("1\n");
			}
		}
	}
	return 0;
}