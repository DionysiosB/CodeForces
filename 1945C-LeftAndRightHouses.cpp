#include <iostream>
#include <vector>

int main(){
    
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::vector<long> vl(n + 1, 0), vr(n + 1, 0);
        for(long p = 1; p <= n; p++){vl[p] = vl[p - 1] + (s[p - 1] == '0');}
        for(long p = n - 1; p >= 0; p--){vr[p] = vr[p + 1] + (s[p] == '1');}

        long idx(-1); float mindist(n + 7);
        for(long p = 0; p <= n; p++){
            if(2 * vl[p] < p){continue;}
            if(2 * vr[p] < (n - p)){continue;}
            float dist = 0.5 * n - p;
            if(dist < 0){dist = -dist + 0.1;}
            if(dist < mindist){mindist = dist; idx = p;}
        }

        std::cout << idx << std::endl;
    }

}
