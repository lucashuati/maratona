#include <bits/stdc++.h>

using namespace std;
int num_calls;
int fib(int n){
	num_calls++;
	if(n == 0 || n == 1) return n;
	else{
		return fib(n-1) + fib(n-2);
	}

}

int main(){
	int CASOS;
	cin >> CASOS;
	for(int i = 0; i < CASOS; i++){
		num_calls = 0;
		int n;
		cin >> n;
		int result = fib(n);
		cout << "fib("<< n << ") = " << num_calls-1 <<" calls = " << result << endl; 	
	}	
	return 0;
}