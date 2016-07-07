#include <bits/stdc++.h>

using namespace std;

int main(){
	string x, y , z;
	cin >> x >> y >> z;

	if(x == "vertebrado" && y == "ave" && z == "carnivoro")
		cout << "aguia" << endl;
	if(x == "vertebrado" && y == "ave" && z == "onivoro")
		cout << "pomba\n";
	if(x == "vertebrado" && y == "mamifero" && z == "onivoro")
		cout << "homem\n";
	if(x == "vertebrado" && y == "mamifero" && z == "herbivoro")
		cout << "vaca\n";
	if(x == "invertebrado" && y == "inseto" && z == "hematofago")
		cout << "pulga\n";
	if(x == "invertebrado" && y == "inseto" && z == "herbivoro")
		cout << "lagarta\n";
	if(x == "invertebrado" && y == "anelideo" && z == "hematofago")
		cout << "sanguessuga\n";
	if(x == "invertebrado" && y == "anelideo" && z == "onivoro")
		cout << "minhoca\n";

	return 0;
}