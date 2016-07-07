#include <bits/stdc++.h>

using namespace std;

int A,B,C,X,Y;
vector<int> princesa, principe;

bool existeNoJogo(int x){
	if(x == A)
		return true;
	if(x == B)
		return true;
	if(x == C)
		return true;
	if(x == X)
		return true;
	if(x == Y)
		return true;

	return false;

}
int main(){
   
   while(scanf("%d%d%d%d%d",&A,&B,&C,&X,&Y),A+B+C+X+Y){
   		princesa.clear();
   		principe.clear();
   		princesa.push_back(A);
   		princesa.push_back(B);
   		princesa.push_back(C);
   		principe.push_back(X);
   		principe.push_back(Y);
   		sort(princesa.begin(),princesa.end());
   		sort(principe.begin(),principe.end());
   		int carta;
   		
   		
		//CASO 1
		if(principe[0] > princesa[2]){
			carta = 1;
		}else{
			//CASO 2
			if(principe[1] > princesa[2] && principe[0] > princesa[1]){
				carta = princesa[1] + 1; 
			}else{
				// CASO 3
				if(principe[0] > princesa[1] && principe[1] < princesa[2]){
					carta = princesa[1]+1;
				}else{
					//CASO 5
					if(principe[1] > princesa[2])
						carta = princesa[2]+1;
					else
						carta = -1;
				}
			}
		}
		

   		while(existeNoJogo(carta)){
   			carta++;
   		}

		if(carta == 53)
			printf("-1\n");
		else
			printf("%d\n", carta);
   }

   return 0;
}