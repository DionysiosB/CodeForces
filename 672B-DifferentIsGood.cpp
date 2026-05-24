#include <cstdio>
#include <iostream>
#include <set>

const int N = 26;

int main(){

    long n; std::string s;
    std::cin >> n >> s;
    if(s.size() > N){puts("-1"); return 0;}
    std::set<char> c;
    for(int p = 0; p < s.size(); p++){c.insert(s[p]);}
    printf("%ld\n", s.size() - c.size());

    return 0;
}
