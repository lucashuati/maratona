#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b){
	int x = max(a,b);
	int y = min(a,b);
	if(x%y == 0)
		return y;
	else
		return mdc(y,x%y);
}

int main(){
	int x,y,z;
	while(scanf("%d%d%d",&x,&y,&z) != EOF){
		bool pitagorica = false;
		int hipotenusa = max(max(x,y),z);
		if(hipotenusa == x){
			if(pow(x,2) == pow(y,2) + pow(z,2)){
				pitagorica = true;
			}
		}else{
			if(hipotenusa == y){
				if(pow(y,2) == pow(x,2) + pow(z,2)){
					pitagorica = true;
				}
			}else{
				if(pow(z,2) == pow(y,2) + pow(x,2)){
					pitagorica = true;
				}
			}
		}

		if(pitagorica){
			if(mdc(mdc(x,y),z) == 1){
				printf("tripla pitagorica primitiva\n");
			}else{
				printf("tripla pitagorica\n");
			}
		}else{
			printf("tripla\n");
		}

	}
	return 0;
}