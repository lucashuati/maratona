#include <bits/stdc++.h>

using namespace std;

typedef struct P{
  double x,y;
}pontos;

typedef struct A{
  pontos i,f;
}aleta;

double distp(pontos a, pontos b){
  double delta_x = (a.x-b.x);
  double delta_y = (a.y-b.y);
  double d = sqrt((delta_x*delta_x) + (delta_y*delta_y));
  return d;
}

double distr(pontos a, aleta b){
  double A,B,C;
  double xa = b.i.x,xb = b.f.x,ya = b.i.y,yb = b.f.y;
  A = (yb-ya)/(xb-xa);
  B = -1;
  C = (-A*xa) +ya;
  double d = (abs((A*a.x) + (B*a.y) + C))/(sqrt((A*A)+(B*B)));
  return d;

}
int main(){
  int n;
  while(scanf("%d",&n) != EOF){
    double L,H;
    scanf("%lf %lf",&L,&H);
    vector<aleta> v;
    for(int i = 1; i <= n; i++){
      double yi,xf,yf;
      scanf("%lf %lf %lf",&yi,&xf,&yf);
      aleta aux;
      pontos auxi,auxf;
      auxi.y = yi;
      auxf.x = xf;
      auxf.y = yf;
      if(i%2){
        auxi.x = 0;
      }else{
        auxi.x = L;
      }
      aux.i = auxi;
      aux.f = auxf;
      v.push_back(aux);
    }
    double dist = 99999999;
    for (int i = 0; i < v.size()-1; i++) {
      pontos a,b,c;
      a = v[i].f;
      b = v[i+1].f;
      c = v[i+1].i;
      if(i%2){
      //  cout << a.x << " ";
        dist = min(dist,a.x);
        if(a.x >= c.x && a.x <= b.x){
          dist = min(distr(a,v[i+1]),dist);
        }else{
          dist = min(distp(a,c),dist);
        }
      }else{
      //  cout << L - a.x << " ";
        dist = min(dist,L-a.x);
        if(a.x >= b.x && a.x <= c.x){
          dist = min(distr(a,v[i+1]),dist);
        }else{
          dist = min(distp(a,b),dist);
        }
      }
      //printf("%d -> (%.2lf,%.2lf) => (%.2lf,%.2lf):(%.2lf,%.2lf)\n",i,a.x,a.y,b.x,b.y,c.x,c.y);
      // double t = H-v[0].i.y;
      // double dista = distr(a,v[i+1]);
      // double distb = distp(a,b);
      // double distc = distp(a,c);
      //double distaux = min(min(dista,distb),distc);
      //cout << dista << " " << distb << " " << distc << " " << t << endl;
      // dist = min(dist,distaux);

    }
    if((v.size()-1)%2){
    dist = min(dist,v[v.size()-1].f.x);
    }else{
      dist = min(L - v[v.size()-1].f.x,dist);
    }
    printf("%.2lf\n",dist);
  }
  return 0;
}
