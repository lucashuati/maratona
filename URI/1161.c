#include <stdio.h>
#include <stdlib.h>
long long int fatorial(long long int n){
    long long int result=1;
    for(; n > 1;n--){
        result = result * n;
    }
    return result;
}

int main(){
    long long int M,N,soma;
    scanf("%lld",&M);
    do{
        scanf("%lld",&N);
        soma = fatorial(M) + fatorial(N);
        printf("%lld\n",soma);
    }while(scanf("%lld",&M) != EOF);
    return 0;
}
