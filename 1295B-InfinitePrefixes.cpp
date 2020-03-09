#include <iostream>
#include <map>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n, x; std::cin >> n >> x;
        std::string s; std::cin >> s;
        std::map<long, long> cnt;
        long t(0), mn(0), mx(0);
        for(long p = 0; p < s.size(); p++){
            t += (s[p] == '0') - (s[p] == '1');
            ++cnt[t];
            mn = (mn < t) ? mn : t;
            mx = (mx > t) ? mx : t;
        }

        if(t == 0){
            std::cout << ((mn <= x && x <= mx) ? "-1" : "0") << std::endl;
            continue;
        }

        long res(x == 0);
        for(long p = mn; p <= mx; p++){
            long cur = x - p;
            res += cnt[p] * ((cur % t == 0) && ((cur / t) >= 0));
        }
        std::cout << res << std::endl;
    }

    return 0;
}
