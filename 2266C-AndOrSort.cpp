#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        long a(0), z(0);
        for(char x : s){z += (x == '0');}

        long mnv(s.size() + 1);
        for(char x : s){
            z -= (x == '0');
            long cur = a + z;
            mnv = (mnv < cur ? mnv : cur);
            a += (x == '1');
        }

        std::cout << mnv << std::endl;
    }

}
