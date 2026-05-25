#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, s, k; scanf("%ld %ld %ld", &n, &s, &k);
        std::set<long> d; for(long p = 0; p < k; p++){long x; scanf("%ld", &x); d.insert(x);}
        long dist(0);
        for(long p = 0; p < n; p++){
            if(s + p <= n && d.count(s + p) == 0){dist = p; break;}
            if(s - p > 0 && d.count(s - p) == 0){dist = p; break;}
        }
        printf("%ld\n", dist);
    }

    return 0;
}
