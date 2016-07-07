#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, R, M = 0, J = 0;
	while(cin >> N, N){
		M = 0, J = 0;
		for(int i = 0; i < N; i++){
			cin >> R;
			if(R == 0)
				M++;
			else
				J++;				
		}

		cout << "Mary won " << M <<" times and John won " << J << " times" << endl;

	}

	return 0;
}