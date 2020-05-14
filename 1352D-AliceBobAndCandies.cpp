#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long cnt(0), alice(0), bob(0);
        long x(0), y(n - 1);
        long cur(0), prev(0);
        while(x <= y){
            while((x <= y) && (cur <= prev)){cur += a[x]; alice += a[x]; ++x;}
            prev = cur; cnt += (cur > 0); cur = 0;
            while((x <= y) && (cur <= prev)){cur += a[y]; bob += a[y]; --y;}
            prev = cur; cnt += (cur > 0); cur = 0;
        }

        printf("%ld %ld %ld\n", cnt, alice, bob);
    }

    return 0;
}
