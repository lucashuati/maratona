#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d ",&n);
	string str;
	bool f = true;
	//getline(cin,str);
	while(n--){
		if(f)
			f = false;
		else
			cout << endl;
		set<string> se;
		map<string,double> mm;
		double total = 0;
		while(getline(cin,str), str.size() != 0){
			se.insert(str);
			mm[str]++;
			total++;
		}
		for(set<string>::iterator it = se.begin(); it != se.end(); it++){
			string aux = *it;
			printf("%s %.4lf\n",aux.c_str(),mm[aux]/total * 100);
		}
		//cout << endl;
	}
	return 0;
}