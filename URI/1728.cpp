#include <bits/stdc++.h>

using namespace std;

int main(){
	string line;
	while(getline(cin,line)){
		string a ="",b="",c="";
		bool aa = true, bb= false, cc= false;
		for(int i = 0; i< line.size(); i++){
			if(aa && line[i] != '+'){
				a+=line[i];
			}else if(line[i] == '+'){
				bb = true;
				aa = false;
			}else if(bb && line[i] != '='){
				b+=line[i];
			}else if(line[i] == '='){
				bb = false;
				cc = true;
			}else if (cc){
				c += line[i] ;
			}
		}
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		reverse(c.begin(),c.end());

		if(atoi(a.c_str()) + atoi(b.c_str()) == atoi(c.c_str())){
			printf("True\n");
		}else {
			printf("False\n");
		}
	}
	return 0;
}