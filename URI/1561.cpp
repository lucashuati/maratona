
#include <bits/stdc++.h>

using namespace std;

int main(){
  string str;
  while (cin >> str) {
    int hora , minutos;
    hora = 10*((int)str[0]-48);
    hora += (int)str[1]-48;

    minutos = 10*((int)str[3]-48);
    minutos += (int)str[4]-48;
    string binaryh = std::bitset<4>(hora).to_string();
    string binarym = std::bitset<6>(minutos).to_string();

    for (int i = 0; i < binarym.size(); i++) {
      if(binarym[i] == '0')
        binarym[i] = ' ';
      if(binarym[i] == '1')
        binarym[i] = 'o';
    }

    for (int i = 0; i < binaryh.size(); i++) {
      if(binaryh[i] == '0')
        binaryh[i] = ' ';
      if(binaryh[i] == '1')
        binaryh[i] = 'o';
    }


     printf(" ____________________________________________\n");
     printf("|                                            |\n");
     printf("|    ____________________________________    |_\n");
     printf("|   |                                    |   |_)\n");
     printf("|   |   8         4         2         1  |   |\n");
     printf("|   |                                    |   |\n");
     printf("|   |   %c         %c         %c         %c  |   |\n", binaryh[0], binaryh[1], binaryh[2], binaryh[3]);
     printf("|   |                                    |   |\n");
     printf("|   |                                    |   |\n");
     printf("|   |   %c     %c     %c     %c     %c     %c  |   |\n", binarym[0], binarym[1], binarym[2], binarym[3], binarym[4], binarym[5]);
     printf("|   |                                    |   |\n");
     printf("|   |   32    16    8     4     2     1  |   |_\n");
     printf("|   |____________________________________|   |_)\n");
     printf("|                                            |\n");
     printf("|____________________________________________|\n");
     printf("\n");

  }
  return 0;
}
