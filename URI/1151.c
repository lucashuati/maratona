#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=0,b=1,c,i,soma;
    scanf("%d",&c);
    printf("0 1");
    for(i=2;i<c;i++){
        soma = a+b;
        printf(" %d",soma);
        a = b;
        b = soma;

    }
    printf("\n");
    return 0;
}
