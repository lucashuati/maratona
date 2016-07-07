#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c),a+b+c){
		long double v = a*b*c;
		//cout << v << endl;
		double r = pow(v,1.0/3.0);
		long int xr = (long int)r;
		printf("%ld\n",xr);
	}
	return 0;
}