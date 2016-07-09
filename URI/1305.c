/* sprintf example */
#include <stdio.h>

int main ()
{
  double n, m;
  int n1, m1;
  while(scanf("%lf %lf", &n, &m) != EOF){
       
    n1 = (int)n;
    m1 = (int)m;
    n -= n1;
    m -= m1;
    if(m > n){
      printf("%d\n", n1);
    }else{
      printf("%d\n", n1+1);
    }
  }
  return 0;
}