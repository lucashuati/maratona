#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, inicioF,inicio,finalF,final, aux , inst = 1;
    vector <int> desempate, batimentos;
    while(scanf("%d",&n), n){
    	desempate.clear();
    	for (int i = 0; i < 4; ++i){
    		desempate.push_back(0);	
    	}
    	
    	scanf("%d", &m);
    	
    	for(int i = 0; i < n; i++){
    		inicio = 0; final = 0;
    		inicioF = 0; finalF = 0;
    		batimentos.clear();
    		for(int j = 0; j < m; j++){
    			scanf("%d",&aux);
    			batimentos.push_back(aux);
    		}
    		for(int j = 0; j+1 < m; j++){
    			if(batimentos[j] >= batimentos[j+1]){
    				if(final - inicio > finalF - inicioF){
    					finalF = final;
    					inicioF = inicio;
    				}
    				inicio = j+1;
    				final = j+1;
    			}else{
    				final = j + 1;
    			}
    		}
    		if(finalF - inicioF > desempate[0]){
    			desempate[0] = finalF - inicioF;
    			desempate[1] = batimentos[finalF] - batimentos[inicioF];
    			desempate[2] = batimentos[finalF];
    			desempate[3] = i;
    		}else{
    			if(finalF - inicioF == desempate[0]){
    				if(batimentos[finalF] - batimentos[inicioF] > desempate[1]){
    					desempate[0] = finalF - inicioF;
    					desempate[1] = batimentos[finalF] - batimentos[inicioF];
    					desempate[2] = batimentos[finalF];
    					desempate[3] = i;
    				}else{
    					if(batimentos[finalF] - batimentos[inicioF] == desempate[1]){
    						if(batimentos[finalF] > desempate[2]){
    							desempate[0] = finalF - inicioF;
    							desempate[1] = batimentos[finalF] - batimentos[inicioF];
    							desempate[2] = batimentos[finalF];
    							desempate[3] = i;
    						}else{
    							if(batimentos[finalF] == desempate[2]){
    								if(i < desempate[3]){
    									desempate[0] = finalF - inicioF;
    									desempate[1] = batimentos[finalF] - batimentos[inicioF];
    									desempate[2] = batimentos[finalF];
    									desempate[3] = i;
    								}
    							}
    						}

    					}
    				}

    			}
    		}
    	}
    	printf("Instancia #%d\n%d\n\n", inst,desempate[3]+1);
    	inst++;

    }
    return 0;
}