#include <bits/stdc++.h>

using namespace std;


long long int mdc(long long int x,long long int y){
	long long int a = max(x,y);
	long long int b = min(x,y);
	if(a%b == 0){
		return b;
	}else{
		return mdc(b,(a%b));
	}
}

long long int mmc(long long int x,long long int y){
	return ((x*y)/(mdc(x,y)));
}

int main(){
	int n;
	long long int v[101];
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		scanf("%lld",&v[i]);	
	}
	vector<int> v1;
	for(int i = 1; i <= n; i++){
		long long int k = v[i];
		long long int t = 1;
		while(k != i){
			t++;
			k = v[k];	
		}
		v1.push_back(t);	
	}
	long long int tempo = mmc(v1[0],v1[1]);
	
	for(int i = 2; i < v1.size(); i++){
		tempo = mmc(tempo,v1[i]);
	}
	cout << tempo << endl;
	return 0;
}