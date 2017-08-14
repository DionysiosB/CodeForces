#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

int main(){
    
    const int N = 4;
    std::ios_base::sync_with_stdio(false);

    std::string t; getline(std::cin, t);
    std::string x; getline(std::cin, x);
    std::reverse(x.begin(), x.end());
    t = t + x;

    std::string a("");
    for(int p = 0; p < N; p++){if(t[p] != 'X'){a = a + t[p];}}
    a = a + a;

    getline(std::cin, t);
    getline(std::cin, x);
    std::reverse(x.begin(), x.end());
    t = t + x;

    std::string b("");
    for(int p = 0; p < N; p++){if(t[p] != 'X'){b = b + t[p];}}

    puts(a.find(b) != std::string::npos ? "YES" : "NO");

    return 0;
}
