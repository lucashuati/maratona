#include <bits/stdc++.h>

using namespace std;

int main(){
	double q,d,p;
	while(cin >> q, q){
		cin >> d >> p;
		double r;
		r = (d*q*p)/(p-q);
		int ra = (int)r;		
		if(ra == 1)
			printf("%d pagina\n",ra);
		else
			printf("%d paginas\n",ra);

	}
	return 0;
}