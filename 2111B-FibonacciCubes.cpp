#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        long f(1), g(1);
        for(long p = 2; p <= n + 1; p++){long x = f; f = g; g += x;}
        std::string s(m, '0');
        for(long p = 0; p < m; p++){
            long a, b, c; std::cin >> a >> b >> c;
            long d = (a > b ? a : b); d = (d > c ? d : c);
            s[p] += (a >= f && b >= f && c >= f && d >= g);
        }

        std::cout << s << std::endl;
    }

}
