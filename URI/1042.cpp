#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	vector<int> v;
	cin >> a >> b >> c;
	v.push_back(a);v.push_back(b);v.push_back(c);
	sort(v.begin(),v.end());

	cout << v[0] << endl << v[1] << endl << v[2] << endl << endl;
	cout << a << endl << b << endl << c << endl;

    return 0;
}