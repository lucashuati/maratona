#include <bits/stdc++.h>

using namespace std;

int maior(int a, int b, int c){
	int m;
	if(a>b)
		m = a;
	else
		m = b;
	if(m < c)
		m = c;
	return m;
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << maior(a,b,c) << " eh o maior" << endl;

    return 0;
}