#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);

    long n, q; std::cin >> n >> q;
    std::vector<long> s(n + 1, 0);
    while(q--){
        long t, k, d; std::cin >> t >> k >> d;

        std::vector<long> w;
        for(long p = 1; p <= n; p++){
            if(s[p] < t){w.push_back(p);}
            if(w.size() >= k){break;}
        }

        if(w.size() < k){std::cout << "-1" << std::endl;}
        else{
            long sum(0);
            for(int p = 0; p < w.size(); p++){sum += w[p]; s[w[p]] = t + d - 1;}
            std::cout << sum << std::endl;
        }
    }

    return 0;
}
