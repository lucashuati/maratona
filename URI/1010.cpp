#include <bits/stdc++.h>

using namespace std;

int main(){
    int id, qtd;
    double valorA, total = 0;

    cin >> id >> qtd >> valorA;
    total += qtd*valorA;

    cin >> id >> qtd >> valorA;
    total += qtd*valorA;

    printf("VALOR A PAGAR: R$ %.2f\n", total); 

    return 0;
}