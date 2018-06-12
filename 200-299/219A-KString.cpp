#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int k; scanf("%d\n", &k);
    string input, output = "";
    getline(cin, input);
    const int alphaSize = 26; 
    char temp; int letters[alphaSize] = {0};
    for(int u = 0; u < input.size(); u++){letters[input[u] - 'a']++;}
    for(int u = 0; u < alphaSize; u++){
        if(letters[u] == 0){continue;}
        else if(!(letters[u] % k)){for(int v = 0; v < letters[u]/k; v++){output += 'a' + u;}}
        else{output = "-1"; break;}
    }
    if(output == "-1"){cout << output << endl;}
    else{for(int u = 0; u < k; u++){cout << output;}; cout << endl;}
    return 0;
}
