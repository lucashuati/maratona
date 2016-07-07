#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int P[10];
	bool compativel = true;

	for(int i = 0; i < 10; i++){
		cin >> P[i];
	}

	for(int i = 0; i < 5; i++){
		if(P[i] + P[i+5] != 1)
			compativel = false;
	}

	if(compativel)
		cout << "Y" << endl;
	else
		cout << "N" << endl;
	
	return 0;
}