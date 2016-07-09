#include <bits/stdc++.h>

using namespace std;

double segundos(string str){
  double result = 0;
  string horas = "", minutos = "", segundos = "";

  for (int i = 0; i < str.size(); i++) {
    if(i < 2)
      horas += str[i];
    if(i > 2 && i < 5)
      minutos += str[i];
    if(i > 5)
      segundos += str[i];
  }

  result += (double)atoi(horas.c_str()) * 3600;
  result += (double)atoi(minutos.c_str()) * 60;
  result += (double)atoi(segundos.c_str());

  return result;
}
int main(){
  string str, velocidade;
  double velocidadeI = 0, tempoAnterior = 0, tempoAtual = 0, distancia = 0;
  bool first = true;
  while (getline(cin,str)) {
    velocidade = "";
    if(str.size() > 8){
      for (int i = str.size(); i > 8; i--) {
        velocidade += str[i];
      }
      tempoAtual = segundos(str.substr(0,8));
      reverse(velocidade.begin(), velocidade.end());
      if(first){
        tempoAnterior = tempoAtual;
        velocidadeI = (double)atoi(velocidade.c_str());
        velocidadeI = velocidadeI/3600;
        distancia += (tempoAtual - tempoAnterior)*velocidadeI;
        first = false;
      }else{
        distancia += (tempoAtual - tempoAnterior)*velocidadeI;
        velocidadeI = (double)atoi(velocidade.c_str());
        velocidadeI = velocidadeI/3600;
      }
      //distancia += (tempoAtual - tempoAnterior)*velocidadeI;
      //cout <<str.substr(0,8)<< " " << distancia << " = " << tempoAtual << " - " << tempoAnterior << " * " << velocidadeI << endl;;
      tempoAnterior = tempoAtual;
    }else{
      tempoAtual = segundos(str);
      distancia += (tempoAtual - tempoAnterior)*velocidadeI;
      //cout << str << " " << distancia << " = " << tempoAtual << " - " << tempoAnterior << " * " << velocidadeI << endl;
      cout << str;
      printf(" %.2lf km\n",distancia);
      tempoAnterior = tempoAtual;
    }




  }
  return 0;
}
