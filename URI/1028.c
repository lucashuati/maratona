#include <stdio.h>
#include <stdlib.h>

int main(){
    int pilha1,pilha2,a,b,resto=1, result,l;
    scanf("%d",&l);
    while(l!=0){
        resto=1;
        scanf("%d",&pilha1);
        scanf("%d",&pilha2);
        if(pilha1>pilha2){
            a = pilha1;
            b = pilha2;
        }else if(pilha1<pilha2){
            a = pilha1;
            b = pilha2;
        }else{
            resto == 0;
            result = pilha1;
        }
        while(resto != 0){
            resto = a %b;
            if(resto==0){
                result = b;
                break;
            }
            else
                a=b;
                b=resto;
        }
        printf("%d\n",result);
        l--;
    }
    return 0;
}
