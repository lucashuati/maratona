#include <iostream>
#include <math.h>
#include <string>
#include <cstdio>
#include <cstdlib>


using namespace std;
int main() {
  string s1,s2,s3,s4;
  int size, t, i, j ,i1, i2,f1,f2;
  cin >> t;
  getline(cin,s4);	
  for(i=0;i<t;i++)
  {
    i1=i2=0;
    f1=f2=-1;
    getline(cin,s1);
    getline(cin,s2);  
    getline(cin,s3); 
    size = s1.size();
    for (j=0;j<size;j++)
    {
      if(s1[j]==s2[j])
      i1++;
      else if(f1 == -1 && s1[j]!=s2[j] && s1[j]==s3[j])
      f1 = j;
      if(s1[j]==s3[j])
      i2++;
      else if(f2 == -1 && s1[j]!=s3[j] && s1[j]==s2[j])
      f2 = j;
    }
    if(f1>f2 && i1==i2)
    i1++;
    else if(f1<f2 && i1==i2)
    i2++;
    printf("Instancia %d\n",i+1);
    if(i1>i2)
    printf("time 1\n\n");
    else if(i1<i2)
    printf("time 2\n\n");
    else
    printf("empate\n\n");
    }
   return 0;

}
