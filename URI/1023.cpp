#include <bits/stdc++.h>

using namespace std;
typedef struct moradia{
  long long int hab, consumo;
  bool valido;
}moradia;

bool comp(moradia a, moradia b){
	if(a.consumo == b.consumo)
		return a.hab < b.hab;
	else  
		return a.consumo < b.consumo;
}
int main(){
  int cidades, cases = 1;
  while(scanf("%d",&cidades),cidades){
    if(cases != 1)
      printf("\n");
    vector<moradia> v;
    int x = 0, y = 0;
    for (int i = 0; i < cidades; i++) {
        moradia aux;
        scanf("%lld%lld\n",&aux.hab,&aux.consumo);
        x += aux.hab;
        y += aux.consumo;
        aux.valido = true;
        aux.consumo /= aux.hab;
        v.push_back(aux);

    }
    sort(v.begin(),v.end(),comp);
    for (int i = 0; i < v.size()-1; i++) {
      if(v[i].consumo == v[i+1].consumo){
        v[i+1].hab += v[i].hab;
        v[i].valido = false;
      }
    }

    float result;
    int result1;
    if(x == 0){
      result1 = 0;
      result = 0;
    }else{
      if(y == 0){
        result1 = 0;
        result = 0;
      }else{
        result1 = x/y;
        result = (float)y/(float)x;
      }
    }
    float result2;
    result2 = result - result1;
    //result2 *= 100;
    result2 = result1 + result2;
    printf("Cidade# %d:\n",cases);
	bool primeiro = true;
    for (int i = 0; i < v.size(); i++) {
      if(v[i].valido){
		if(primeiro){
			printf("%lld-%lld",v[i].hab,v[i].consumo);
			primeiro = false;
		}else{
			printf(" %lld-%lld",v[i].hab,v[i].consumo);
		}
	}
        
    }

	double int_part;
	int frac_part;
	frac_part = (int) (modf ( (double)y/x, &int_part) *100);
	if(frac_part < 10) printf("\nConsumo medio: %d.0%d m3.\n", (int)int_part, (int)frac_part);
		else printf("\nConsumo medio: %d.%d m3.\n", (int)int_part, (int)frac_part);
	//consumo_medio=(((consumo_total*1.0)/(total_pessoas*1.0))-0.0049999999);
    //printf("\nConsumo medio: %.2f m3.\n",((y*1.0)/(x*1.0))-0.0049999999);
    cases++;

  }
  return 0;
}
