#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	while(scanf("%d", &N),N){
		int aux;
		vector<int> v;
		for (int i = 0; i < N; ++i)		{
			scanf("%d",&aux);
			v.push_back(aux);
		}
	int i, j, gap = 1, cont =0;
 	while(gap < v.size()){
        gap = 3*gap+1;
    }   
    while(gap > 1){
        gap = gap / 3;
        
        for(i = gap; i < v.size(); i++){
            aux = v[i];
            j = i - gap;
            while(j >=0 && v[j] > aux){
                v[j+gap] = v[j];
                j -=gap;
                cont++;
            }
            v[j + gap] = aux;
        }
    }

	if(cont%2 == 0)
		printf("Carlos\n");
	else
		printf("Marcelo\n");
		
	}
    return 0;
}