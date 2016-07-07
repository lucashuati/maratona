#include <bits/stdc++.h>

using namespace std;
char alfabeto[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int valor(char c, int jump){
	int value =  c - 65;
	if(value-jump < 0){
		//cout << 25 + (value-jump) << "->" << c << endl;
		return 26 + (value-jump);
	}else{
		//cout << value-jump << "->" << c << endl;
		return value-jump;
	}
}
int main(){
	int cases, salto;
	string msg;
	scanf("%d", &cases);
	for(int i = 0; i < cases; i++){
		cin >> msg;
		scanf("%d", &salto);
		for(int j = 0; j < msg.size(); j++){
			char caracter = msg[j];
			//valor(caracter,salto);
			printf("%c",alfabeto[valor(caracter,salto)]);
		}
		printf("\n");
		

	}
	return 0;
}