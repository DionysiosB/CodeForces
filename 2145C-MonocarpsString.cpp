#include <iostream>
#include <unordered_map>
#include <algorithm>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        long a = std::count(s.begin(), s.end(), 'a');
        long b = std::count(s.begin(), s.end(), 'b');
        if(a == b){std::cout << "0" << std::endl; continue;}

        long total(b - a), cnt(0), mnlen(n);
        std::unordered_map<long, long> m; m[0] = -1;
        
        //std::cout << "s:" << s << " total:" << total << std::endl;

        for(long p = 0; p < n; p++){
            cnt += (s[p] == 'b') - (s[p] == 'a');
            if(m.count(cnt - total)){
                long len = (p - m[cnt - total]);
                mnlen = (mnlen < len ? mnlen : len);
            }
            m[cnt] = p;

            //std::cout << "idx:" << p << " cnt:" << cnt << " mnlen:" << mnlen << std::endl;
            //for(std::pair<long, long> x : m){std::cout << x.first << " -> " << x.second << std::endl;}
            //std::cout << std::endl;


        }

        mnlen = (mnlen == n ? -1 : mnlen);
        std::cout << mnlen << std::endl;
    }

}
