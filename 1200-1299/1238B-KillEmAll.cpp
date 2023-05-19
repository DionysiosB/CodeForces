#include <cstdio>
#include <set>

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        long n, r; scanf("%ld %ld", &n, &r);
        std::set<long> s; for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s.insert(x);}
        long cur = 1e6; long cnt(0);
        for(std::set<long>::reverse_iterator it = s.rbegin(); it != s.rend(); it++){
            long x = *it;
            if(x - r * cnt <= 0){break;}
            cur = x - r * cnt; ++cnt;
        }

        printf("%ld\n", cnt);
    }

    return 0;
}
