#include <bits/stdc++.h>
using namespace std;

int cheat(int cheat, int accusation) {
    if(cheat == 1 && accusation == 0 || cheat == 0 && accusation == 1) {
        return 1;
    }
    return 2;
}

int main() {

int p, j1, j2, c, a, sum = 0,result;
cin>>p>>j1>>j2>>c>>a;
sum = j1 + j2;

if(p == 1 && sum % 2 == 0 || p == 0 && sum % 2 != 0){
    result = 1;  
}
if(p == 1 && sum % 2 != 0 || p == 0 && sum % 2 == 0) {
    result = 2;
}

if (c != 0 || a !=0) {
    result = cheat(c, a);
}

cout<<"Jogador "<<result<<" ganha!"<<endl;



return 0;
}