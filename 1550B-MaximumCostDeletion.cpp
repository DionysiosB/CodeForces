#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, a, b; std::cin >> n >> a >> b;
        std::string s; std::cin >> s;
        long d(0);
        for(long p = 1; p < s.size(); p++){d += (s[p] != s[p - 1]);}
        long factor = (b >= 0) ? n : (1 + (d + 1) / 2);
        printf("%ld\n", n * a + factor * b);
    }

}
