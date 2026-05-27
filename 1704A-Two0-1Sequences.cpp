#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::string a, b; std::cin >> a >> b;
        long lag = n - m;
        bool ans(true);
        for(long p = 1; ans && p < m; p++){
            if(b[p] != a[lag + p]){ans = false;}
        }

        if(ans && a[lag] != b[0]){
            ans = false;
            for(long p = 0; p < lag; p++){if(a[p] == b[0]){ans = true; break;}}
        }

        std::cout << (ans ? "YES" : "NO") << std::endl;
    }

}
