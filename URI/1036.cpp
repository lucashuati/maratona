#include <bits/stdc++.h>

using namespace std;

int main(){
    double a,b,c,x1,x2;

    cin >> a >> b >> c;

    double delta = (b*b) - (4*a*c);

    if(delta < 0 || a == 0)
    	cout << "Impossivel calcular" << endl;
    else{
    	x1 = ((-1 * b) + sqrt(delta)) / (2*a);
    	x2 = ((-1 * b) - sqrt(delta)) / (2*a);
    	printf("R1 = %.5f\nR2 = %.5f\n",x1,x2);
    }


 	return 0;
}