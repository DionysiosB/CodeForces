#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        long a(0), z(0);
        for(long p = 0; p < s.size(); p++){
            z += (s[p] == '0');
            a += (s[p] == '1');
        }

        const long d = n/2 -  k;
        bool possible((z >= d) && (a >= d) && ((a - d) % 2 == 0) && ((z - d) % 2 == 0) );
        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
