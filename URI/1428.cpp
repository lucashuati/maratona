#include <bits/stdc++.h>

using namespace std;

int main(){
	int c;
	cin >> c;
	while(c--){
		int n,m;
		cin >> n >> m;
		n-= 2; m -=2;
		int k = n/3;
		if(n%3){
			k++;
		}
		// /cout <<
		int l = m/3;
		if(m%3){
			l++;
		}
		int t = k*l;
		printf("%d\n",t);
	}
	return 0;
}