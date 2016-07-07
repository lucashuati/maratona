#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int r,l,w;
	int p = 1;
	while(cin >> r >> l >> w, r){
		long long int d = 2*r;
		if(l*l + w*w <= d*d){
			printf("Pizza %d fits on the table.\n",p++);
		}else{
			printf("Pizza %d does not fit on the table.\n",p++ );
		}


	}
	return 0;
}