#include <bits/stdc++.h>

using namespace std;

int main () {
	int casos;
  	cin >> casos;
  	while(casos > 0){
  		string v;
  		cin >> v;
  		sort(v.begin(),v.end());
		do {
    		std::cout << v <<'\n';
  		}while (next_permutation(v.begin(),v.end()));

  		printf("\n");
  		casos--;
  	}
	
	  return 0;
}