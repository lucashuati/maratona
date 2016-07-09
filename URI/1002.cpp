//Iniciante - 1002

using namespace std;
#include <math.h>
#include <iostream>
#include<stdio.h>

int main(){
	double PI, area, raio;
	PI =  3.14159;
	scanf("%lf",&raio);
	area = PI * pow(raio,2);
	printf("A=%.4lf\n",area);
	return 0;
}
