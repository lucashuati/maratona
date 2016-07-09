#include <bits/stdc++.h>

using namespace std;

bool potencia2(int n){
	

	while(n >= 2){
		
		if(n%2 != 0)
			return false;

		if(n == 16 || n == 8 || n == 4 || n == 2)
			return true;
		
		n = n/2;

	}

	return false;
}


int main(){
	
	int N, Ui, Ri, Li, U, L, R,u,r,l;
	int maior;
	while(cin >> N, N){
		U = 0; R = 0; L = 0; 
		for (int i = 0; i < N; ++i){
			u = 0, r = 0, l = 0;
			cin >> Ui >> Ri >> Li;
			if(potencia2(Ui)){
				U++;
				u = Ui;
			}
			if(potencia2(Ri)){
				R++;
				r = Ri;
			}				
			if(potencia2(Li)){
				L++;
				l = Li;
			} 
			maior = max(Li, Ui);
			maior = max(maior,Ri);

			
			if(maior == Ui && u != 0)
				U++;
			else{
				if(maior == Ri && r != 0)
					R++;
				else
					if(maior == Li && l != 0)
						L++; 
			}
		}
		
		if(U > R && U > L)
			cout << "Uilton" << endl;
		else
			if(R > U && R > L)
				cout << "Rita" << endl;
			else
				if(L > R && L > U)
					cout << "Ingred" << endl;
				else
					cout << "URI" << endl;
 		
 	}

	return 0;
}