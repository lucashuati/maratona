#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases, shoots;
	vector<int> shoots_hight;
	string kiloman_moves;
	scanf("%d", &cases);
	for (int i = 0; i < cases; ++i){
		//clear all
		shoots = 0;
		shoots_hight.clear();
		kiloman_moves.clear();
		int number_shoots;
		scanf("%d",&number_shoots);
		for (int i = 0; i < number_shoots; ++i){
			int aux;
			scanf("%d", &aux);
			shoots_hight.push_back(aux);
		}
		cin >> kiloman_moves;
		for (int i = 0; i < kiloman_moves.size(); ++i){
			if(kiloman_moves[i] == 'J'){
				if(shoots_hight[i] > 2)
					shoots++;
			}else{
				if(shoots_hight[i] <= 2)
					shoots++;
			}
		}
		printf("%d\n",shoots);
	}
	return 0;
}