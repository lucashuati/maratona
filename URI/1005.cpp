//Iniciante - 1005

using namespace std;
#include <math.h>
#include <iostream>
#include<stdio.h>

int main(){
	double a, b, MEDIA;
	scanf("%lf",&a);scanf("%lf",&b);
	MEDIA = (a*3.5) +  (7.5* b);
	MEDIA = MEDIA/11;
	printf("MEDIA = %.5lf\n",MEDIA);
	return 0;
}
