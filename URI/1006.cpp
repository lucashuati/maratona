//Iniciante - 1006

using namespace std;
#include <math.h>
#include <iostream>
#include<stdio.h>

int main(){
	double a, b, c, MEDIA;
	scanf("%lf",&a);scanf("%lf",&b);scanf("%lf",&c);
	MEDIA = (a*2) +  (3* b) + (5*c);
	MEDIA = MEDIA/10;
	printf("MEDIA = %.1lf\n",MEDIA);
	return 0;
}
