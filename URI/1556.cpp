#include <bits/stdc++.h>

using namespace std;

typedef struct st{
	char a; int p;
}st;
map <string,int> mm;
vector<st> g[1001];

string s,a;

set<string> ms;

int v[26];


void dfs(int i){
	ms.insert(a);
	mm[a] = 1;
	for(int j = 0; j < g[i].size(); j++){
		st S = g[i][j];
		a+= S.a;
		if(!mm[a]){
			dfs(S.p);
		}
		a.pop_back();
	}
}

void limpa(int n){
	for(int i = 0; i < n; i++){
		g[i].clear();
	}
	ms.clear();
	mm.clear();
	memset(v,0,sizeof(v));
}

int main(){
	while(cin >> s && !cin.eof()){
		st S;
		limpa(s.size());
		for(int i = 0; i < s.size(); i++){
			for(int j = i+1; j < s.size(); j++){
				S.a = s[j];
				S.p = j;
				g[i].push_back(S);
			}
		}
		for(int i = 0; i < s.size(); i++){
			if(!v[s[i]-'a']){
				v[s[i]-'a'] = 1;
				a = "";
				a += s[i];
				dfs(i);
			}

		}
		set<string>::iterator it;
		for(it = ms.begin(); it != ms.end(); it++){
			cout << *it << endl;
		}
		cout << endl;
	}
	return 0;
}
