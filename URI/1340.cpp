#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		stack<int> p;
		queue<int> f;
		priority_queue<int> h;
		bool pi = true,fi = true,pq = true;
		for (int i = 0; i < n; ++i){
			int op,elem;
			scanf("%d%d",&op,&elem);
			if(op == 1){
				p.push(elem);
				f.push(elem);
				h.push(elem);
			}else{
				// cout << "elemento: " << elem << endl;
				// cout << "pilha: " << p.top() << endl;
				// cout << "fila: " << f.front() << endl;
				// cout << "lista de prioridade: " << h.top() << endl;
				if(elem != p.top()){	
					pi = false;
				}
				if(elem != f.front()){	
					fi = false;
				}
				if(elem != h.top()){	
					pq = false;
				} 
				f.pop();
				p.pop();
				h.pop();
				// cout << "pilha: " << pi << endl;
				// cout << "fila: " << fi << endl;
				// cout << "lista de prioridade: " << pq << endl;
			}
		}
		int k = pi+fi+pq;
		if(k > 1){
			printf("not sure\n");
		}else if(pq){
			printf("priority queue\n");
		}else if(pi){
			printf("stack\n");
		}else if(fi){
			printf("queue\n");
		}else{
			printf("impossible\n");
		}
	}
	return 0;
}