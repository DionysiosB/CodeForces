#include <iostream>
#include <vector>

int main(){

    const long N = 26;
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string sa, sb; std::cin >> sa >> sb;
        std::vector<long> from(N + 1, 0), to(N + 1, 0);
        for(long p = 0; p < sa.size(); p++){++from[sa[p] - 'a'];}
        for(long p = 0; p < sb.size(); p++){++to[sb[p] - 'a'];}
        bool possible(true);
        for(long p = 0; p < N; p++){
            if(from[p] < to[p]){possible = false; break;}
            from[p] -= to[p];
            if(from[p] % k){possible = false; break;}
            from[p + 1] += from[p];
        }

        std::cout << (possible ? "Yes" : "No") << std::endl;
    }

}
