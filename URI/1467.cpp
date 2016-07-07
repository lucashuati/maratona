#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	while(scanf("%d %d %d", &a, &b, &c) != EOF){
		if(a == b && b == c){
			printf("*\n");
		}else{
			if(a != b && a != c){
				printf("A\n");
			}else{
				if(b != c && b != a){
					printf("B\n");
				}else{
					if(c != b && c != a){
						printf("C\n");
					}
				}
			}
		}
	}
	return 0;
}