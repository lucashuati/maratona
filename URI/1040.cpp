#include <bits/stdc++.h>

using namespace std;

int main(){
	double n1,n2,n3,n4,media,exame;
	cin >> n1 >> n2 >> n3 >> n4;
	media = (n1*2) + (n2*3) + (4*n3) + n4;
	media /= 10;
	printf("Media: %.1f\n", floor(media*10)/10);
	if(media < 5){
		cout << "Aluno reprovado." << endl;
	}else{
		if(media >= 5 && media < 7){
			cout << "Aluno em exame." << endl;
			cin >> exame;
			printf("Nota do exame: %.1f\n",exame);
			if((media+exame)/2 >= 5){
				cout << "Aluno aprovado." << endl;
			}else{
				cout << "Aluno reprovado." << endl;
			}
			printf("Media final: %.1f\n",(floor(((media+exame)/2)*10))/10);
		}else{
			cout << "Aluno aprovado." << endl;
		}

	}

    return 0;
}