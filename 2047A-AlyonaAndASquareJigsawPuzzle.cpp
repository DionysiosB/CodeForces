#include <cstdio>
#include <set>

int main(){

    std::set<long> s;
    for(long p = 1; p <= 107; p += 2){s.insert(p * p);}

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0), cs(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            cs += x;
            cnt += s.count(cs);
        }

        printf("%ld\n", cnt);
    }

}
