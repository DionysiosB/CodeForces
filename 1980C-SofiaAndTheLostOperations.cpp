#include <cstdio>
#include <vector>
#include <unordered_set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::unordered_multiset<long> msd;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x != a[p]){msd.insert(x);}
        }

        long m; scanf("%ld", &m);
        bool ans(true); long d;
        for(long p = 0; p < m; p++){
            scanf("%ld", &d);
            if(msd.size() > m - p || msd.empty()){continue;}
            std::unordered_multiset<long>::iterator it = msd.find(d);
            if(it != msd.end()){msd.erase(it);}
            else if(p + 1 == m){
                bool tmp(false);
                for(long u = 0; u < n; u++){if(d == a[u]){tmp = true; break;}}
                ans = tmp;
            }
        }

        ans = ans && msd.empty();

        puts(ans ? "YES" : "NO");
    }

}
