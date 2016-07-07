#include <bits/stdc++.h>
#define inf 999999
 
using namespace std;
 
typedef struct aresta{
  int u,v;
  int w;
}aresta;
 
int main(){
  int n;
  while(scanf("%d",&n), n){
    string origem, destino;
    cin >> origem >> destino;
    int ia = 1;
    vector<aresta> edges;
    vector<int> vertices;
    map<string,int> mm;
    map<int,string> mr;
    vertices.push_back(0);
    int t = 0;
    for (int i = 0; i < n; i++) {
      string str1, str2, str3;
      cin >> str1 >> str2 >> str3;
      for(int j = 'a'; j <= 'z'; j++){
        string str4 = str1;
        str4 += '.';
        str4 += j;
        if(mm.count(str4) == 0){
          mm[str4] = ia;
          mr[ia] = str4;
          vertices.push_back(ia);
          ia++;
        }
        str4 = str2;
        str4 += '.';
        str4 += j;
        if(mm.count(str4) == 0){
          mm[str4] = ia;
          mr[ia] = str4;
          vertices.push_back(ia);
          ia++;
        }
      }
      for(int j = 'a'; j <= 'z'; j++){
        string str4 = str1, str5 = str2;
        str4 += '.'; str5 += '.';
        str4 += str3[0]; str5 += j;
        aresta aux;
        //cout << str4 << " " << mm[str4] << " " << str5 << " " << mm[str5] << endl;
        if(j != str3[0]){
          aux.u = mm[str4];
          aux.v = mm[str5];
          aux.w = str3.size();
          edges.push_back(aux);
        }
        //cout << mm[str4] << " " << str5 << " "<< aux.w << " " << edges.size()-1<< endl;
        str4 = str2; str5 = str1;
        str4 += '.'; str5 += '.';
        str4 += str3[0]; str5 += j;
        if(j != str3[0]){
          aux.u = mm[str4];
          aux.v = mm[str5];
          aux.w = str3.size();
          edges.push_back(aux);
        }
      }
    }
    int o,d;
    mr[ia] = origem; mm[origem] = ia;
    o = ia;
    vertices.push_back(ia);
    ia++;
    mr[ia] = destino; mm[destino] = ia;
    d = ia;
    vertices.push_back(ia);
    for(int j = 'a'; j <= 'z'; j++){
      string str4 = origem, str5 = origem;
      str5 += '.';
      str5 += j;
      aresta aux;
      aux.u = mm[str4];
      aux.v = mm[str5];
      aux.w = 0;
      edges.push_back(aux);
      str4 = destino; str5 = destino;
      str5 += '.';
      str5 += j;
      aux.v = mm[str4];
      aux.u = mm[str5];
      aux.w = 0;
      edges.push_back(aux);
    }
 
    int distance[vertices.size()+1];
    for(int i = 1; i < vertices.size(); i++){
      distance[i] = inf;
    }
    distance[o] = 0;
 
    for(int i = 1; i < vertices.size()-1; i++){
      for(int j = 0; j < edges.size();j++){
        int u = edges[j].u;
        int v = edges[j].v;
        int w = edges[j].w;
        if(distance[u] + w  < distance[v]){
          distance[v] = distance[u] + w;
        }
      }
    }
    if(distance[d] == inf)
      printf("impossivel\n");
    else
      printf("%d\n",distance[d]);
 
  }
 
  return 0;
}