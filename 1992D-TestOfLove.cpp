#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m, k; std::cin >> n >> m >> k;
        std::string s; std::cin >> s;
        s = "L" + s + "L";
        std::vector<long> v;
        for(long p = 0; p < s.size(); p++){if(s[p] == 'L'){v.push_back(p);}}
        bool possible(true);
        for(long p = 0; possible && p + 1 < v.size(); p++){
            if(v[p] + m >= v[p + 1]){continue;}
            long cur = v[p] + m;
            long nxt = v[p + 1];
            long dist = nxt - cur;
            if(dist <= k){k -= dist;}
            else{possible = false; break;}
            for(long u = cur; u < nxt; u++){
                if(s[u] == 'C'){possible = false; break;}
            }
        }
        
        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
