#include <bits/stdc++.h>

using namespace std;

int main(){
	int i,f;
	scanf("%d%d",&i,&f);
	if(i <= f){
		if(i == f)
			printf("O JOGO DUROU 24 HORA(S)\n");
		else
			printf("O JOGO DUROU %d HORA(S)\n",f - i);
	}else{
		printf("O JOGO DUROU %d HORA(S)\n",24-i + f);
	}
	return 0;
}