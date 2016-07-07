#include <bits/stdc++.h>
#define inf 9999
using namespace std;

int m[10][10];
long long int d[100][100];

int r_id(int i, int j, int n){
	if(i < 0 || i >= 100 || j < 0 || j >= 100){
		return -1;
	}else{
		return m[i][j];
	}
}

int main(){
	int id = 0;
	for(int i = 0; i < 10; i++){
		for (int j = 0; j < 10; ++j){
			m[i][j] = id;
			//cout << m[i][j] << " ";
			id++;
		}
	}
	//cout << endl;
	int n;

	while(scanf("%d", &n),n){
		memset(d,inf,sizeof(d));
		for(int j = n-1; j >= 0; j--){
			for(int i = 0; i < n; i++){
				for(int k = 0; k < 4; k++){
					int aux;
					scanf("%d",&aux);
					if(aux == 1){
						if(k == 0){
							int u = r_id(i,j,n);
							int v = r_id(i,j+1,n);
							if(u != -1 && v != -1)
								d[u][v] = 1;

							//cout << u << " -> " << v << endl;
						}
						if(k == 1){
							int u = r_id(i,j,n);
							int v = r_id(i,j-1,n);
							if(u != -1 && v != -1)
								d[u][v] = 1;

							//cout << u << " -> " << v << endl;
						}
						if(k == 2){
							int u = r_id(i,j,n);
							int v = r_id(i-1,j,n);
							if(u != -1 && v != -1)
								d[u][v] = 1;

							//cout << u << " -> " << v << endl;
						}
						if(k == 3){
							int u = r_id(i,j,n);
							int v = r_id(i+1,j,n);
							if(u != -1 && v != -1)
								d[u][v] = 1;

							//cout << u << " -> " << v << endl;
						}

					}
				}
			}
		}

		for(int i=0; i < 100; i++)
        	d[i][i]=0;

		for(int k = 0; k < 100; k++)
	        for(int i = 0; i < 100; i++)
	            for(int j = 0; j < 100; j++)
	                if(d[i][j]>d[i][k]+d[k][j])
	                    d[i][j]=d[i][k]+d[k][j];


		int q;
		scanf("%d",&q);
		while(q--){
			int x1,y1,x2,y2;
			scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
			int u = r_id(x1,y1,n);
			int v = r_id(x2,y2,n);
			if(u != -1 && v != -1){
				if(d[u][v] >= inf){
					printf("Impossible\n");
				}else{
					printf("%d\n", d[u][v]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}