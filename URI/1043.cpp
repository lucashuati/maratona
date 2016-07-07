#include <bits/stdc++.h>

using namespace std;

int main(){
	double a,b,c,absBC,absAC,absAB;
	cin >> a >> b >> c;
	absAB = abs(a-b);
	absAC = abs(a-c);
	absBC = abs(b-c);

	if(absBC < a && a < b+c && absAC < b && b < a+c && absAB < c && c < a+c){
		printf("Perimetro = %.1f\n", a + b + c );

	}else
		printf("Area = %.1f\n", ((a+b)*c)/2 );


    return 0;
}