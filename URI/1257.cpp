#include <bits/stdc++.h>

using namespace std;

int main(){
	int c;
	cin >> c;
	while(c--){
		int lines;
		cin >> lines;
		int hash = 0;
		for(int j = 0; j < lines; j++){
			string l;
			cin >> l;
			for(int i = 0; i < l.size(); i++){
				//cout << (l[i]-'A') << " " << j << " " << i << endl;
				hash += (l[i]-'A') + j + i;
			}
		}
		cout << hash << endl;
	}
	return 0;
}