#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	scanf("%d",&cases);
	for (int i = 0; i < cases; ++i){
		int players, secret_number, near = 9999, near_player;
		scanf("%d%d",&players, &secret_number);
		for (int i = 1; i <= players; ++i){
			int number;
			scanf("%d",&number);
			int modulo = number - secret_number;
			if(modulo < 0)
				modulo *= -1;
			if(modulo < near){
				near = modulo;
				near_player = i;
			}
		}
		printf("%d\n", near_player);
	}
	return 0;
}