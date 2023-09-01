#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, a, q; std::cin >> n >> a >> q;
        std::string s; std::cin >> s;
        long cnt(a), plus(a); bool all(cnt >= n);
        for(long p = 0; p < s.size(); p++){
            plus += (s[p] == '+');
            cnt += (s[p] == '+') - (s[p] == '-');
            if(cnt >= n){all = true;}
        }

        if(all){std::cout << "YES" << std::endl;}
        else{std::cout << (plus >= n ? "MAYBE" : "NO") << std::endl;}
    }

}
