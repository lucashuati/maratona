#include <stdio.h>
#include <stdlib.h>

int main(){
    int primo, i,test,l;
    scanf("%d",&l);
    while(l!=0){
        scanf("%d",&primo);
        test = 0;
        for(i = primo-1; i > 1;i--){
            if(primo%i==0){
                test = 1;
                break;
            }
        }
        if(test==1)
            printf("%d nao eh primo\n",primo);
        else
            printf("%d eh primo\n",primo);
        l--;
    }
    return 0;
}
