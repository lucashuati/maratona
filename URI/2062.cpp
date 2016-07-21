#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	bool f = true;
	scanf("%d ",&n);
	while(n--){
		string str;
		cin >> str;
		if(f){
			f = false;
		}else{
			cout << " ";
		}
		if(str.size() == 3 && str[0] == 'U' && str[1] == 'R'){
			cout << "URI";
		}else if(str.size() == 3 && str[0] == 'O' && str[1] == 'B'){
			cout << "OBI";
		}else{
			cout << str;
		}
	}
	cout << endl;
	return 0;
}