#include <bits/stdc++.h>

using namespace std;

int main(){
	int ih, im, fh, fm;
	scanf("%d%d%d%d", &ih,&im,&fh,&fm);
	int h, m = 0;
	if(ih <= fh){
		if(ih == fh)
			h = 24;
		else
			h = fh - ih;
	}else{
		h = 24-ih + fh;
	}
	if(im <= fm){
		if(ih == fh)
			m = 0;
		else
			m = fm - im;
	}else{
		m = 60-im + fm;
		h--;
	}

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);


	return 0;
}