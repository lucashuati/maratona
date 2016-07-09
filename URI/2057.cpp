#include <bits/stdc++.h>

using namespace std;

int main(){
	int s,t,f;
	scanf("%d%d%d",&s,&t,&f);
	int k = (s+t)%24 + f;
	if(k < 0)
		k += 24;
	cout << k << endl;
	return 0;
}