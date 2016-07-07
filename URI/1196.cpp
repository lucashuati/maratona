#include <bits/stdc++.h>

using namespace std;

int main(){
	string c;
	string x;
	while(getline(cin, c)){
		x.clear();
		for(int i = 0; i < c.size(); i++){
			if(c[i] == 'W'){
				x.push_back('Q');
			}
			if(c[i] == 'E'){
				x.push_back('W');
			}
			if(c[i] == 'R'){
				x.push_back('E');
			}
			if(c[i] == 'T'){
				x.push_back('R');
			}
			if(c[i] == 'Y'){
				x.push_back('T');
			}
			if(c[i] == 'I'){
				x.push_back('U');
			}
			if(c[i] == 'U'){
				x.push_back('Y');
			}
			if(c[i] == 'O'){
				x.push_back('I');
			}
			if(c[i] == 'P'){
				x.push_back('O');
			}
			if(c[i] == '['){
				x.push_back('P');
			}
			if(c[i] == ']'){
				x.push_back('[');
			}
			if(c[i] == '\\'){
				x.push_back(']');
			}
			if(c[i] == 'S'){
				x.push_back('A');
			}
			if(c[i] == 'D'){
				x.push_back('S');
			}
			if(c[i] == 'F'){
				x.push_back('D');
			}
			if(c[i] == 'G'){
				x.push_back('F');
			}
			if(c[i] == 'H'){
				x.push_back('G');
			}
			if(c[i] == 'J'){
				x.push_back('H');
			}
			if(c[i] == 'K'){
				x.push_back('J');
			}
			if(c[i] == 'L'){
				x.push_back('K');
			}
			if(c[i] == ';'){
				x.push_back('L');
			}
			if(c[i] == '\''){
				x.push_back(';');
			}
			if(c[i] == 'X'){
				x.push_back('Z');
			}
			if(c[i] == 'C'){
				x.push_back('X');
			}
			if(c[i] == 'V'){
				x.push_back('C');
			}
			if(c[i] == 'B'){
				x.push_back('V');
			}
			if(c[i] == 'N'){
				x.push_back('B');
			}
			if(c[i] == 'M'){
				x.push_back('N');
			}
			if(c[i] == ','){
				x.push_back('M');
			}
			if(c[i] == '.'){
				x.push_back(',');
			}
			if(c[i] == '/'){
				x.push_back('.');
			}
			if(c[i] == '1'){
				x.push_back('`');
			}
			if(c[i] == '2'){
				x.push_back('1');
			}
			if(c[i] == '3'){
				x.push_back('2');
			}
			if(c[i] == '4'){
				x.push_back('3');
			}
			if(c[i] == '5'){
				x.push_back('4');
			}
			if(c[i] == '6'){
				x.push_back('5');
			}
			if(c[i] == '7'){
				x.push_back('6');
			}
			if(c[i] == '8'){
				x.push_back('7');
			}
			if(c[i] == '9'){
				x.push_back('8');
			}
			if(c[i] == '0'){
				x.push_back('9');
			}
			if(c[i] == '-'){
				x.push_back('0');
			}
			if(c[i] == '='){
				x.push_back('-');
			}
			if(c[i] == ' '){
				x.push_back(' ');
			}
		}
		cout << x;
		printf("\n");
	}
	
}