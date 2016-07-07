#include <bits/stdc++.h>
#define PI 3.14159

using namespace std;

int main(){
	long long R;
	double volume;

	cin >> R;
	volume = ((double) 4 / (double) 3) * PI * double(R*R*R);
	printf("VOLUME = %0.3lf\n",volume);

    return 0;
}