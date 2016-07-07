#include <bits/stdc++.h>

using namespace std;

int main(){
	int c;
	scanf("%d",&c);
	while(c--){
		int f;
		scanf("%d",&f);
		set<int> se;
		while(f--){
			int a;
			scanf("%d",&a);
			se.insert(a);
		}
		cout << se.size() << endl;
	}
	return 0;
}