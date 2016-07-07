#include <bits/stdc++.h>

using namespace std;

long long int intervalo[2] = {-1,-1};

double binarysearchD(vector<long long int> vo,long long int result, long long int x){
	long long int e = 0, m, d = 10000;
	double area = 0;
	vector<double> v;
	while(e <= d){
		area = 0;
		m = (e+d)/2;
		v.clear();
		double r;
		for(int i = 0; i < vo.size();i++){
			r = double(m)/10000;
			r += result; 
			v.push_back(vo[i] - r);
			if(v[i] < 0)
				v[i] = 0;
			area+= v[i];
		}
		//printf("%.4f - (%lld, %lld)\n",r, e, d);
		if(area == x)
			return r;
		if(area > x){
			e = m + 1;
		}else{
			d = m - 1;
		}
	}
	return -1;
}
long long int binarysearchI(vector<long long int> vo,long long int maior, long long int x){
	long long int e = 1, m, d = maior;
	long long int area = 0;
	vector<long long int> v;
	intervalo[0] = e;
	intervalo[1] = d;
	while(e <= d){
		area = 0;
		m = (e+d)/2;
		v.clear();
		for(int i = 0; i < vo.size();i++){
			v.push_back(vo[i] - m);
			if(v[i] < 0)
				v[i] = 0;
			area+= v[i]; 
		}
		if(area == x)
			return m;
		if(area > x){
			e = m + 1;
			if(e <= d)
				intervalo[0] = e;
		}else{
			d = m - 1;
			if(e <= d) 
				intervalo[1] = d;
		}
	}
	return -1;
}
int main(){
	long long int N, A;

	while(scanf("%lld%lld", &N, &A), N + A){
		vector<long long int> fitas;
		long long int soma = 0, maior = -1;
		for(int i = 0; i < N; i++){
			long long int aux;
			scanf("%lld", &aux);
			fitas.push_back(aux);
			soma += aux;
			if(fitas[i] > maior)
				maior = fitas[i];
		}

		if(A == soma){
			printf(":D\n");
		}else{
			if(A > soma){
				printf("-.-\n");
			}else{
				long long int result = binarysearchI(fitas, maior, A);
				if(result != -1){
					printf("%lld.0000\n",result);
				}else{
					long long int x = intervalo[0] - 5;
					double y = binarysearchD(fitas,x,A);
					while(y == -1){
						y = binarysearchD(fitas,x,A);
						x++;
					}
					printf("%.4f\n",y);

					
				}
			}
		}
	}
	return 0;
}