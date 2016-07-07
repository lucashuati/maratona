#include <bits/stdc++.h>
#define llong unsigned long long int
using namespace std;


llong pot2(llong x){
	if(x == 0)
		return 1;
	llong result = 1;
	for(int i = 0; i < x; i++)
		result *= 2;
	return result;
}

llong btol(string x){
	llong result = 0;
	for(int i = 0; i < x.size(); i++){
		int indice = x.size()-1 - i;
		int y = (int)x[i] - 48;
		//cout << y;
		result += y * pot2(indice);
	}
	return result;
}
llong mdc(llong a, llong b){
	llong x = max(a,b);
	llong y = min(a,b);
	if(x%y == 0)
		return y;
	else
		return mdc(y,x%y);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		string s1, s2;
		cin >> s1 >> s2;
		llong ss1, ss2;
		ss1 = btol(s1);
		ss2 = btol(s2);
		if(mdc(ss1,ss2) == 1)
			printf("Pair #%d: Love is not all you need!\n",i);
		else
			printf("Pair #%d: All you need is love!\n",i);

	}
	return 0;
}