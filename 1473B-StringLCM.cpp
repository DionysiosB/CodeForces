#include <iostream>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    std::ios_base::sync_with_stdio(false);

    long q; std::cin >> q;
    while(q--){
        std::string s, t; std::cin >> s >> t;
        long u(s.size()), v(t.size());
        long lcm = u * v / gcd(u, v);
        std::string x(""); for(long p = 0; p < lcm / u; p++){x += s;}
        std::string y(""); for(long p = 0; p < lcm / v; p++){y += t;}
        std::cout << (x == y ? x : "-1") << std::endl;
    }

}
