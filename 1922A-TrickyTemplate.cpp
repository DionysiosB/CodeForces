#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b, c; std::cin >> a >> b >> c;
        bool res(false);
        for(long p = 0; !res && p < n; p++){
            if(c[p] != a[p] && c[p] != b[p]){res = true;}
        }

        //std::cout << a << std::endl; std::cout << b << std::endl; std::cout << c << std::endl;
        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
