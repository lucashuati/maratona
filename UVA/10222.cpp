#include <bits/stdc++.h>

using namespace std;

char rc(char x){
    if(x == 'e'){
        return 'q';
    }
    if(x == 'r'){
        return 'w';
    }
    if(x == 't'){
        return 'e';
    }
    if(x == 'y'){
        return 'r';
    }
    if(x == 'u'){
        return 't';
    }
    if(x == 'i'){
        return 'y';
    }
    if(x == 'o'){
        return 'u';
    }
    if(x == 'p'){
        return 'i';
    }
    if(x == '[' || x == '{'){
        return 'o';
    }
    if(x == ']' || x == '}')
        return 'p';
    if(x == 'd'){
        return 'a';
    }
    if(x == 'f'){
        return 's';
    }
    if(x == 'g'){
        return 'd';
    }
    if(x == 'h'){
        return 'f';
    }
    if(x == 'j'){
        return 'g';
    }
    if(x == 'k'){
        return 'h';
    }
    if(x == 'l'){
        return 'j';
    }
    if(x == ':' || x == ';'){
        return 'k';
    }
    if(x == '\'' || x == '\"'){
        return 'l';
    }
    if(x == 'c'){
        return 'z';
    }
    if(x == 'v'){
        return 'x';
    }
    if(x == 'b'){
        return 'c';
    }
    if(x == 'n'){
        return 'v';
    }
    if(x == 'm'){
        return 'b';
    }
    if(x == '<' || x == ','){
        return 'n';
    }
    if(x == '.' || x == '>'){
        return 'm';
    }
    return x;
}
int main(){
    string line;
    while(getline(cin,line)){
        for(int i = 0; i < line.size();i++){
            cout << rc(tolower(line[i]));
        }
        cout << endl;
    }
    return 0;
}
