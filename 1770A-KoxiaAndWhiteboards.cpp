#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::multiset<long> s; long long total(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            s.insert(x);
            total += x;
        }

        while(m--){
            long b; scanf("%ld", &b);
            std::multiset<long>::iterator it = s.begin();
            total += (b - (*it));
            s.erase(it); s.insert(b);
        }

        printf("%lld\n", total);
    }

}
