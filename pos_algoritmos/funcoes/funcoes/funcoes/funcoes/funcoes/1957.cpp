#include <bits/stdc++.h>
using namespace std;

string conversion(int number) {
    int div = 0;
    int mod = 0;
    int aux = number;
    string hex_number;
    char hex_chars[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    while (aux != 0) {
        mod = aux % 16;
        div = aux / 16;
        aux = div;

        hex_number = hex_chars[mod] + hex_number;
    }

    return  hex_number;

}

int main() {

int N;
cin>>N;

string hex;
hex = conversion(N);
 
cout<<hex<<endl;


return 0;
}