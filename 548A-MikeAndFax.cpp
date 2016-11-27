#include <cstdio>
#include <iostream>


bool isPalindrome(std::string x){
    long n = x.size();
    for(int p = 0; p < n / 2; p++){if(x[p] != x[n - 1 - p]){return 0;}}
    return 1;
}

int main(){

    std::string s; getline(std::cin, s);
    int k; std::cin >> k;
    if(s.size() % k){puts("NO"); return 0;}
    int m = s.size() /k;
    for(int p = 0; p < k; p++){if(!isPalindrome(s.substr(m * p, m))){puts("NO"); return 0;}}
    puts("YES"); return 0;
}
