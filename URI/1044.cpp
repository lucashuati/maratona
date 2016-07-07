#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,Max, Min;
	cin >> a >> b;
	Max = max(a,b);
	Min = min(a,b);

	if(Max%Min == 0)
		cout << "Sao Multiplos" << endl;
	else
		cout << "Nao sao Multiplos" << endl;

    return 0;
}