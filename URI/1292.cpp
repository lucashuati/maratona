#include <bits/stdc++.h>
#define pi 3.14159265358979323846
int main(){
	long double p;
	double k = sin(108*pi/180)/sin(63*pi/180);
	while (scanf("%Lf", &p) != EOF)
    	printf("%.10Lf\n", k*p);
}