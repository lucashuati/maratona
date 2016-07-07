#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main(){
	int count = 0;
	double dist, media = 0;
	string name;

	getline(cin,name);

	while(cin >> dist){
		media += dist;
		count++;
		getline(cin,name);
		getline(cin,name);
	}

	media = media/count;
	printf("%0.1f\n",media);

	return 0;
}