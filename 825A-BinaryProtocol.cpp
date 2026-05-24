#include <cstdio>
#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;

    int count(0);
    for(long p = 0; p < s.size(); p++){
        if(s[p] == '0'){printf("%d", count); count = 0;}
        else{++count;}
    }
    printf("%d\n", count);

    return 0;
}
