#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	scanf("%d",&cases);
	for (int i = 0; i < cases; ++i){
		int x, y;
		scanf("%d%d", &x,&y);
		printf("%d cm2\n",x*y/2);
	}
	return 0;
}