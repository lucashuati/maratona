#include <bits/stdc++.h>

using namespace std;

map<string,int> mm;
long long int forca(string a){
	long long int f = 0;
	for(int i = 0; i < a.size(); i++){
		f += (int)a[i];
	}
	return f;
}

long long int forca_Time(vector<long long int> forcas, deque<long long int> timeX, bool timeA){
	long long int res = 0;
	if(!timeA){
		for (int i = 1; i <= timeX.size(); ++i){
			res+= i*forcas[timeX[i-1]-1];
			//cout << i << "x" << forcas[timeX[i-1]-1] << endl;
		}
	}
	else{
		for (int i = timeX.size(), ind = 0; i >= 1; --i, ind++){
			res+= i*forcas[timeX[ind]-1];
			//cout << i << "x" << forcas[timeX[ind]-1] << endl;
		}
	}
	return res;
}

void print(deque<long long int> t, vector<string> x){
	for (int i = 0; i < t.size(); ++i){
		cout << x[t[i]-1] << endl;
	}
}
int main(){
	int n;
	while(scanf("%d",&n), n){
		vector<string> x;
		vector<long long int> forcas;
		deque<long long int> timeA,timeB;
		string a;
		for (int i = 1; i <= n; ++i){
			cin >> a;
			x.push_back(a);
			forcas.push_back(forca(a));
			timeA.push_back(i);
		}
		bool empate = false;
		int escolhido = 0;
		for(int i = n/2; i <= n; i++){
			long long int t1 = forca_Time(forcas,timeA, true);
			long long int t2 = forca_Time(forcas,timeB,false);
			if(t1 == t2){
				escolhido = timeA[timeA.size()-1]-1;
				if(escolhido < 0)
					escolhido = 0; 	
				empate = true;
				break;
			}
			long long int aux = timeA[timeA.size()-1];
			timeA.pop_back();
			timeB.push_front(aux);
		}

		if(empate){
			cout << x[escolhido] << endl;
		}else{
			printf("Impossibilidade de empate.\n");
		}

		

	}

	return 0;
}