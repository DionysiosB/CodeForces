#include <cstdio>
#include <vector>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> v(n);
        std::map<long, long> m;
        for(long p = 0; p < n; p++){
            scanf("%ld", &v[p]);
            ++m[v[p]];
        }

        bool possible(true);
        for(std::pair<long, long> x : m){
            if(x.second % k){possible = false; break;}
        }

        if(!possible){puts("0"); continue;}

        long idx(0); std::map<long, long> sm;
        long long cnt(0);
        for(long p = 0; p < n; p++){
            const long x = v[p];
            ++sm[x];
            while(sm[x] > (m[x] / k)){--sm[v[idx]]; ++idx;}
            cnt += (p - idx + 1);
        }

        printf("%lld\n", cnt);
    }
}
