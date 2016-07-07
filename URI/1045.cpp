#include <bits/stdc++.h>

using namespace std;

int main(){
	
	float v[3];
	int aux;

	scanf("%f%f%f",&v[0], &v[1], &v[2]);

	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 2; ++j){
			if(v[j] < v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}

	if(v[0] < v[1] + v[2]){
		if(pow(v[0],2) == (pow(v[1],2) + pow(v[2],2)))
			cout << "TRIANGULO RETANGULO" << endl;
		if(pow(v[0],2) < (pow(v[1],2) + pow(v[2],2)))
			cout << "TRIANGULO ACUTANGULO" << endl;
		if(pow(v[0],2) > (pow(v[1],2) + pow(v[2],2)))
			cout << "TRIANGULO OBTUSANGULO" << endl;
		if(v[0] == v[1] && v[1] == v[2])
			cout << "TRIANGULO EQUILATERO" << endl;
		else
			if(v[0] == v[1] || v[1] == v[2] || v[0] == v[2])
				cout << "TRIANGULO ISOSCELES" << endl; 
	}else
		cout << "NAO FORMA TRIANGULO" << endl;
    return 0;
};