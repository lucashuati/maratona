#include <bits/stdc++.h>
#define inf 0x3f3f3f3f

using namespace std;
#define TAM 300000

typedef struct aresta{
  int u,v;
  int w;
}aresta;
int dist[TAM];
bool comp(int u, int v){
    return dist[u] > dist[v];
}

int main(){

    int caso = 1;
    cin.sync_with_stdio(false);
    int n;
    while(cin >> n, n != 0){
        vector< pair<int,int> >g[TAM];
        int qte = 2;
        string origem, destino;
        map<string,int> mm;
        vector<aresta> arestas;
        vector<int> vertices;
        cin >> origem >> destino;
        //cout << origem << " " << destino << endl;
        int ia = 1;
        vertices.push_back(0);
        mm[origem] = 1;
        ia+=27;
        //cout << ia << endl;
        for(int i = 1; i < 27; i++){
          aresta aux;
          aux.u = 1;
          aux.v = 1+i;
          aux.w = 0;
          arestas.push_back(aux);
          g[aux.u].push_back(make_pair(aux.v,aux.w));
          char k = i+96;
         // cout << origem << "(" << aux.u << ")" << "->" << origem << "." << k << "(" << aux.v << ")" << endl;
        }
        int d = ia;
        mm[destino] = ia;
        ia+=27;
        for(int i = 1; i < 27; i++){
          aresta aux;
          aux.u = d+i;
          aux.v = d;
          aux.w = 0;
          char k = i+96;
          arestas.push_back(aux);
        g[aux.u].push_back(make_pair(aux.v,aux.w));
         // cout << destino << "." << k <<"(" << aux.u << ")" << "->" << destino << "." << k << "(" << aux.v << ")" << endl;
      }
        for (int i = 0; i < n; i++) {
          string str1, str2, str3;
          cin >> str1 >> str2 >> str3;
          //cout << str1 << " " << str2 << endl;
          int U = mm[str1];
          int V = mm[str2];
          if(U == 0){
              qte++;
            //  cout << "nao achei U" << endl;
              mm[str1] = ia;
              U = ia;
              ia+=27;
          }
          if(V == 0){
              qte++;
             // cout << "nao achei V" << endl;
              mm[str2] = ia;
              V = ia;
              ia+=27;
          }
          for(int i = 1; i < 27; i++){
            if(i+96 != str3[0]){
                aresta aux;
                aux.u = U+1+str3[0]-97;
                aux.v = V+i;
                aux.w = str3.size();
                char k = i+96;
                //cout << str1 << "." << str3[0] << "(" << aux.u << ")" << "->" << str2 << "." << k << "(" << aux.v << ")" << endl;
                arestas.push_back(aux);
                g[aux.u].push_back(make_pair(aux.v,aux.w));
            }
        }
           for(int i = 1; i < 27; i++){
               if(i+96 != str3[0]){
                   aresta aux;
                   aux.u = V+1+str3[0]-97;
                   aux.v = U+i;
                   aux.w = str3.size();
                   char k = i+96;
                   //cout << str2 << "." << str3[0] <<"(" << aux.u << ")" <<"->" << str1 << "." << k <<"(" << aux.v << ")" <<endl;
                   arestas.push_back(aux);
                   g[aux.u].push_back(make_pair(aux.v,aux.w));
               }
           }
       }
       //cout << mm["alemao"] << " " << mm["portugues"] << " " << mm["ingles"] << " " << mm["espanhol"] << " " << mm["frances"] << endl;
       qte*= 27;
       vector<int>heap;
        int n, m;
         int x,i=0;
         for(i=0;i<qte+1;i++)
          dist[i]=inf;

         heap.push_back(1);
         dist[1]=0;
         make_heap(heap.begin(),heap.end(),comp);
        while(!heap.empty()) {
         x=heap[0];
         pop_heap(heap.begin(), heap.end(), comp);
         heap.pop_back();
         for(i=0; i < g[x].size();i++) {
              if(dist[ g[x][i].first ] > g[x][i].second + dist[x]) {
                 dist[ g[x][i].first ] = g[x][i].second + dist[x];
                 heap.push_back( g[x][i].first ); //insere o vertice no heap novamente
                 push_heap(heap.begin(), heap.end(), comp);//sobe o elemento inserido
              }
         }
        }
        if(dist[28] == inf)
          printf("impossivel\n");
        else
          printf("%d\n",dist[28]);
    }
    return 0;
}
