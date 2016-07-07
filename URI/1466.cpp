#include <bits/stdc++.h>

using namespace std;

class No{
public:
	int chave;
	No *esq, *dir;
	No(int);
};

No::No(int x){
	this->chave = x;
	this->dir = NULL;
	this->esq = NULL;
}

void inserir(No* T, int x){
	if(T == NULL)
		T = new No(x);
	else{
		while(T != NULL){
			if(x < T->chave){
				if(T->esq == NULL){
					T->esq = new No(x);
					break;
				}
				else
					T = T->esq;
			}
			else{
				if(T->dir == NULL){
					T->dir = new No(x);
					break;
				}else
					T = T->dir;
				
			}
		}
		if(T == NULL)
			cout << "CHAVE EXISTENTE" << endl;
	}
}

void percursoEmNivel(No* T){
	queue<No*> q;
	q.push(T);
	No* aux = q.front();
	while(!q.empty()){
		No* aux = q.front();
		printf("%d",aux->chave);
		q.pop();
		if(aux->esq != NULL)
			q.push(aux->esq);
		if(aux->dir != NULL)
			q.push(aux->dir);
		if(!q.empty())
			printf(" ");
	}
}

int main(){

	int CT, nos;
	int n;
	scanf("%d",&CT);
	for(int i = 0; i < CT; i++){
		scanf("%d",&nos);
		scanf("%d",&n);
		No* raiz = new No(n);
		for(int j = 1; j < nos; j++){
			scanf("%d",&n);
			inserir(raiz,n);
		}
		printf("Case %d:\n",i+1);
		percursoEmNivel(raiz);
		printf("\n");
		raiz = NULL;
		printf("\n");
	}
    return 0;
}