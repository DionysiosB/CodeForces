#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b; std::cin >> a >> b;
        a += '0'; b += '0';
        long cnt(0); bool ans(true);
        for(long p = 0; p < a.size(); p++){
            cnt += (a[p] == '1') - (a[p] == '0');
            if( (a[p] == b[p]) != (a[p + 1] == b[p + 1]) && cnt){ans = false; break;}
        }

        std::cout << (ans ? "YES" : "NO") << std::endl;

    }
}
