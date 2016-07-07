#include <bits/stdc++.h>

using namespace std;

int main(){
	int va;
	while(scanf("%d",&va),va){
		int ua;
		while(scanf("%d",&ua),ua){
			stack<int> a,b;
			vector<int> v;
			v.push_back(ua);
			for(int i = 0; i < va-1; i++){
				int aux;
				scanf("%d",&aux);
				v.push_back(aux);
			}
			int vagao = 2;
			a.push(1);
			//2 1 7 6 10 5 20 12 18 16 8 17 14 4 9 13 11 19 15 3
			for (int i = 0; i < v.size(); ++i){
				//cout << v[i] << " ";
				if(!a.empty()){
					//cout << a.top() << endl;
					if(a.top() == v[i])
						a.pop();
					else if(a.top() > v[i]){
						break;
					}else{
						while(a.top() < v[i]){
							a.push(vagao);	
							vagao++;
						}
						a.pop();
					}
				}else{
					a.push(vagao);
					vagao++;
					i--;
				}
			}
			if(a.empty())
				printf("Yes\n");
			else
				printf("No\n");	
		}
		cout << endl;
	}

	return 0;
}