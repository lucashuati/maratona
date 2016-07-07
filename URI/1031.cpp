 #include <bits/stdc++.h>
 
 using namespace std;
 
 int main(){

 	 int N;
 	 
 	 while(scanf("%d", &N),N){
 	 	int cidades[N];
		int M = 1, numeroCidades = N,y;
		bool stop = false;
		
		while(!stop){
			numeroCidades = N;
			for (int i = 0; i < N; ++i){
				cidades[i] = 0;
			}
			for (int i = 0, cont = M-1;; ++i){
 	 			if(i == N)
 	 				i = 0;
 	 			if(cidades[i] != 1)
 	 				cont++;
 	 			if(cont == M){
 	 				numeroCidades--;
 	 				cont = 0;
 	 				cidades[i] = 1;
 	 				if(numeroCidades == 0 && i == 12){
 	 					printf("%d\n", M);
 	 					stop = true;
 	 					break;
 	 				}
 	 				if(numeroCidades != 0 && i == 12){
 	 					break;
 	 				}

 	 			}	
 	 		}	
 	 		M++;
 	 	}
 	 }

     return 0;
 }