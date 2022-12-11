#include <cstdio>
#include <iostream>

int main(){

    std::string a, b; getline(std::cin, a); getline(std::cin, b);

    int countOnes = 0;
    for(int p = 0; p < a.size(); p++){if(a[p] == '1'){++countOnes;}}
    if(countOnes % 2){++countOnes;}
    for(int p = 0; p < b.size(); p++){if(b[p] == '1'){--countOnes;}}

    puts(countOnes >= 0 ? "YES" : "NO");

    return 0;
}
