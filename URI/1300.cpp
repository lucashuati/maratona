#include <bits/stdc++.h>

using namespace std;

int main(){
	int y;
	while(cin >> y){
		//cout << y << endl

		if(y %6 != 0)
			cout << "N" << endl;
		else
			cout << "Y" << endl;
	}
	return 0;
}