#include <bits/stdc++.h>
#define TAM 32
using namespace std;

int main(){
    unsigned long long a, b;
    int numero1[32], numero2[32], resultado[TAM];

    while(cin >> a){
    	cin >> b;
       	
       	for(int i = 0; i < TAM; ++i){
       		if(a == 0)
       			numero1[i] = 0;
       		else
       			numero1[i] = a%2;
       		if(b == 0)
       			numero2[i] = 0;
       		else
       			numero2[i] = b%2;
    
       		a /= 2;
       		b /= 2;
    	}
    	unsigned long long soma = 0;
    
    	for(int i = TAM - 1, j = 0, k = 31; i >= 0; i--,j++,k--){
    		if(numero1[i]+numero2[i] == 2)	
    			resultado[j] = 0;
    		else
    			resultado[j] = numero1[i]+numero2[i];
    
    		soma += resultado[j]*(pow(2,k)); 
    	}
    
    	cout << soma << endl;
    }
}