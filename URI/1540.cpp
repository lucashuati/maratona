#include "bits/stdc++.h"
#include <string>
using namespace std;

int main(){
	int n , f;
	int ano1, ano2;
	double a, b;
	cin >> n;
	for(int i = 0; i < n; i++){
		f = 0;
		cin >> ano1;
		cin >> a;
		cin >> ano2;
		cin >> b;

		int dif = ano2 - ano1;
		double difRend = b - a;
		double result = difRend / dif;

		int t = (int) result;
		double r = abs(result - (double)t);
		if(r < 0.1)
			f = 1;
		r = r * 100;
		int d = abs((int) r);
		cout << t << ",";
		if(f == 1)
			cout << "0" << d;
		else
			if(d < 10)
				cout << d << 0;
			else
				cout << d;
		cout << endl;
	}

	return 0;
}