#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;

        bool possible(true);
        long cnt(0); 
        for(long p = 0; possible && p < s.size(); p++){
            if(s[p] == '1'){++cnt;}
            else{cnt = 0;}
            if(cnt >= k){possible = false;}
        }

        if(!possible){std::cout << "NO" << std::endl; continue;}
        std::cout << "YES" << std::endl;

        cnt = 1;
        std::vector<long> v(n, 0);
        for(long p = 0; p < n; p++){if(s[p] == '1'){v[p] = cnt++;}}
        for(long p = 0; p < n; p++){if(!v[p]){v[p] = cnt++;}}
        for(long p = 0; p < n; p++){std::cout << v[p] << " ";}
        std::cout << std::endl;
    }

}
