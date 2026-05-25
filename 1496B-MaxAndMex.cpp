#include <cstdio>
#include <set>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long max(0), mex(0); std::set<long> s;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            s.insert(x);
            max = (max > x) ? max : x;
        }

        if(max == n - 1){printf("%ld\n", n + k); continue;}
        for(long p = 0; p < 1e9 + 7; p++){if(!s.count(p)){mex = p; break;}}

        long u = (max + mex + 1) / 2;
        long add = (k > 0) * (1 - s.count(u));
        printf("%ld\n", s.size() + add);
    }

}
