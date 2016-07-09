#include <bits/stdc++.h>

using namespace std;

int f(char c){
  if(c == '1')
    return 2;
    if(c == '2')
      return 5;
      if(c == '3')
        return 5;
        if(c == '4')
          return 4;
          if(c == '5')
            return 5;
            if(c == '6')
              return 6;
              if(c == '7')
                return 3;
                if(c == '8')
                  return 7;
                  if(c == '9')
                    return 6;
                    if(c == '0')
                      return 6;
}

int main(){
  string str;
  int n;
  scanf("%d",&n);
  while(n--){
    cin >> str;
    int c = 0;
    for (int i = 0; i < str.size(); i++) {
      c+=f(str[i]);
    }
    cout << c << " leds" << endl;
  }
}
