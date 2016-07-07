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

void pre(No* T){
	if(T != NULL){
		printf(" %d",T->chave);
		pre(T->esq);
		pre(T->dir);
	}
}

void pos(No* T){
	if(T != NULL){
		pos(T->esq);
		pos(T->dir);
		printf(" %d",T->chave);
	}
}

void in(No* T){
	if(T != NULL){
		in(T->esq);
		printf(" %d",T->chave);
		in(T->dir);
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
		printf("Pre.:");pre(raiz);
		printf("\n");
		printf("In..:");in(raiz);
		printf("\n");
		printf("Post:");pos(raiz);
		printf("\n");
		raiz = NULL;
		printf("\n");
	}
    return 0;
}