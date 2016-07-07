#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int a,b;
	scanf("%d%d",&a,&b);
	int c,d;
	scanf("%d %d",&c,&d);
	if(n >= a && n <= b && n >= c && n <= d){
		printf("possivel\n");
	}else{
		printf("impossivel\n");
	}
	return 0;
}