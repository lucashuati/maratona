#include <bits/stdc++.h>

using namespace std;

int main(){
	double l,c,r1,r2;
	while(scanf("%lf%lf%lf%lf",&l,&c,&r1,&r2), l+c+r1+r2){
		double raios = r1+r2;
		double diametro = (2*r1) + (2*r2);
		double a = l - raios;
		double b = c - raios;
		double d = sqrt(a*a + b*b);
		//cout << d << " " << raios << " " << c << " " << sqrt(l*l + c*c) <<endl;
		if(d >= raios && l >= 2*r1 && l >= 2*r2 && c >= 2*r1 && c >= 2*r2){
			printf("S\n");
		}
		else
			printf("N\n");
	}
	return 0;
}