#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  scanf("%d",&n);
  for (size_t i = 0; i < n; i++) {
    string str1, str2;
    cin >> str1 >> str2;
    int size = min(str1.size(),str2.size());
    for (size_t j = 0; j < size; j++) {
      printf("%c%c",str1[j],str2[j]);
    }
    if(str1.size() == size){
      for (size_t j = size; j < str2.size(); j++) {
        printf("%c",str2[j]);
      }
    }else{
      for (size_t j = size; j < str1.size(); j++) {
        printf("%c",str1[j]);
      }
    }
    printf("\n");
  }
  return 0;
}
