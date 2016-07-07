#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int H1, H2, M1, M2;

	int minutos;
	int horas;

	while(cin >> H1 >> M1 >> H2 >> M2, H1+H2+M1+M2){
	
		if(H1 == 0)
			H1 = 24;
		if(H2 == 0)
			H2 = 24;

		if(M1 > M2){
			if(H1 < H2){
				minutos = (M2 - M1) + 60;
				horas = (H2 - H1) - 1;
			}else{
				minutos = (M1 - M2) + 60;
				horas = (H1 - H2) - 1;
			}
		}else{
			if(H1 <= H2){
				minutos = M2 - M1;
				horas = H2 - H1;
			}else{
				minutos = M1 - M2;
				horas = H1 - H2;
			}
		}

		minutos += horas*60;

		if((H1 == H2 && M1 > M2) || H1 > H2)
			minutos = (24 * 60) - minutos;	

		cout << minutos << endl;
	}	

	return 0;
}