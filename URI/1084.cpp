#include <bits/stdc++.h>

using namespace std;

deque <int> md;

int main(){
	int m,n;
	while(scanf("%d%d",&m,&n),m+n){
		int aux = m-n;
		string s;
		cin >> s;
		//cout << s;
		int a = (int)s[0];
		md.push_back(a);
		//	cout << md.size() << endl;
		for (int i = 1; i < s.size(); ++i)
		{
			//cout << i << endl;
			while(!md.empty() && md.back() < (int)s[i] && (m-1-i+md.size()) >= aux){
				md.pop_back();
			}
			if(md.size()+1 <= aux)
				md.push_back((int)s[i]);
		}
		while(!md.empty()){
			printf("%d",md.front()-48);
			md.pop_front();
		}
		printf("\n");
	}
	return 0;
}