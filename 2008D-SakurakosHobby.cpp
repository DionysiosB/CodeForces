#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<long> v(n + 1, 0), f(n + 1, 0);
        std::vector<bool> w(n + 1, 0);
        for(long p = 1; p <= n; p++){std::cin >> v[p];}
        std::string s; std::cin >> s;
        for(long p = 1; p <= n; p++){
            if(w[p]){continue;}
            std::vector<long> u;
            long x(p), cnt(0);
            while(!w[x]){
                u.push_back(x);
                w[x] = 1;
                cnt += (s[x - 1] == '0');
                x = v[x];
            }

            for(long k = 0; k < u.size(); k++){f[u[k]] = cnt;}
        }

        for(long p = 1; p <= n; p++){printf("%ld ", f[p]);}
        puts("");
    }

}
