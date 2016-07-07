#include <bits/stdc++.h>

using namespace std;
#define lim 100000000
// Contador de números.
long long int pc=1;
// Vetor para guarda os primos encontrados , já coloco o 2 no vetor para não precisar calcular os numeros pares.
int primes[10000001] = {2};
// Vetor para executar o crivo.
char isprime[lim]; 


long long int v[10000001];
int fatorar(long long int n){
	memset(v,0,sizeof(v));
	long long int i = 0;
	//cout << primes[78499] << endl;
	while(n > 1){
		//cout << primes[i] << endl;
		if(n%primes[i]==0){
			v[i]++;
			n = n/primes[i];
		}else{
			i++;
		}
	}

	return i+1;
}

 
void crivo(){
     // Comando para marca todos os valores do vetor isprime como 1
     memset(isprime,1,sizeof(isprime));
     // for(int i = 0; i < 500001;i++){
     // 	printf("%d -> %d\n",isprime[i],i);
     // }
   		//printf("%c\n",isprime[500000]);	
     for(long long int i=3;i<lim;i+=2){
         //cout << i << endl;
         //Verifico se o numero está marcado com o 1.
         if(isprime[i]){
            // Coloco ele no vetor.
            primes[pc++] = i;
            // Marco todos seus múltiplos como não primos (0).
            for(long long int j=i*i;j<lim;j+=i) {
            	//cout << j << endl;
            	isprime[j] = 0;
            }
        }
     }
     cout << pc << endl;
     //for(int i=0;i<pc;i++) //printf("%d ",primes[i]);
}


int main(){
	int cases;
	crivo();

	scanf("%d",&cases);
	for (int i = 1; i <= cases; ++i){
		long long int  n;
		scanf("%lld",&n);
		int limite = fatorar(n);
		long long int ans=1;
		for (int j = 0; j < limite; ++j){
			if(v[j]%2 != 0){
				v[j]++;
			}
			ans *= pow(primes[j],v[j]);
		}
		printf("Caso #%d: %lld\n",i,ans);
	}
	return 0;
}