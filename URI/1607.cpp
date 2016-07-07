#include <bits/stdc++.h>

using namespace std;

int main(){
	int c;
	cin >> c;
	while(c--){
		string a, b;
		cin >> a >> b;
		int result = 0;
		for(int i = 0; i < a.size(); i++){
			int la = a[i] - 'a';
			int lb = b[i] - 'a';
			if(la <= lb){
				result += lb-la;
			}else{
				result += lb-la+26;
			}
			//cout << la  << " " << lb << endl;
		}
		cout << result << endl;
	}
	return 0;
}