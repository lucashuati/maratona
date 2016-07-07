#include <bits/stdc++.h>

using namespace std;

int main(){
	int num, hours;
	double value;
	
	cin >> num >> hours >> value;
	
	cout << "NUMBER = " << num << endl << "SALARY = U$ ";
	printf("%.2f\n",(double)hours*value);
	return 0;
}