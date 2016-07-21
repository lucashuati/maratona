#include <bits/stdc++.h>

using namespace std;

int main(){	
	int t;
	cin >> t;
	while(t--){
		int g=0,b=0,r=0;
		int n;
		cin >> n;
		char A,B;
		while(n--){
			cin >> A >> B;
			if(A == 'G'){
				g++;
				if(B == 'B'){
					g++;
				}
			}
			else if(A == 'B'){
				b++;
				if(B == 'R'){
					b++;
				}
			}
			else{
				r++;
				if(B == 'G'){
					r++;
				}
			}
		}
		if(r == b && b == g){
			printf("trempate\n");
		}
		else if((r == b && r > g) || (b == g && g > r) || (r == g && g > b) ){
			printf("empate\n");
		}
		else{
			int R = max(r,max(b,g));
			if(R == r){
				printf("red\n");
			}
			else if(R == b){
				printf("blue\n");
			}
			else{
				printf("green\n");
			}
		}
	}
	return 0;
}