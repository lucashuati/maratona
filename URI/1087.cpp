#include <bits/stdc++.h>

using namespace std;
bool ataca(int a, int b, int c, int d){
	if(a == c)
		return true;
	if(b == d)
		return true;

	for(int j = 0; (a+j) < 9 && (b+j) < 9 ; j++){
		if((a+j) == c && (b+j) == d)
			return true;
	}
	for(int j = 0; (a-j) > 0 && (b-j) > 0 ; j++){
		if((a-j) == c && (b-j) == d)
			return true;
	}
	for(int j = 0; (a-j) > 0 && (b+j) < 9 ; j++){
		if((a-j) == c && (b+j) == d)
			return true;
	}
	for(int j = 0; (a+j) < 9 && (b-j) > 0 ; j++){
		if((a+j) == c && (b-j) == d)
			return true;
	}

	return false;
}

int main(){
	
	int a, b, c, d;

		
		while(cin >> a >> b >> c >> d, a+b+c+d){
			if(a == c && b == d)
				cout << "0" << endl;
			else{
				if(ataca(a,b,c,d))
					cout << "1" << endl;
				else
					cout << "2" << endl;
			}
		}

	return 0;
}
