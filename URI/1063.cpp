#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n,n){
		vector<char> ff;
		queue <char> fi;
		stack <char> p;
		for(int i = 0; i < n; i++){
			char c,l;
			cin >> c;
			fi.push(c);	
			
			//printf("()%c()",c);
			
		}
		for(int i = 0; i < n; i++){
			char c;
			cin >> c;
			//printf("()%c()",c);
			ff.push_back(c);
		}
		for(int i = 0; i < ff.size(); i++){
			//printf("%c -> ",ff[i]);
			if(!p.empty() && p.top() == ff[i]){
				p.pop();
				//printf("desempilhei %c\n",ff[i]);
				printf("R");
			}else if(!fi.empty()){
				bool f = true;
				while(1){
					if(fi.empty()){
						f = false;
						break;
					}
					//printf("%c ",fi.front());
					if(fi.front() != ff[i]){
						//printf("empilhei %c\n",fi.front());
						p.push(fi.front());
						printf("I");
						fi.pop();
					}else{
						// printf("empilhei %c\n",fi.front());
						// printf("desempilhei %c\n",fi.front());
						printf("IR");
						fi.pop();
						break;
					}
				}
				if(!f){
					break;
				}
			}else{
				break;
			}
		}
		if(p.size() != 0){
			printf(" Impossible\n");
		}else{
			printf("\n");
		}
	}
	return 0;
}