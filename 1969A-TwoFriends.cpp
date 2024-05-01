#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &v[p]);}
        long mncnt(3);
        for(long p = 1; p <= n; p++){
            if(!v[p]){continue;}
            long x(p), cnt(0);
            while(v[x]){++cnt; long y = v[x]; v[x] = 0; x = y;}
            mncnt = (cnt < mncnt ? cnt : mncnt);
        }

        printf("%ld\n", mncnt);
    }

}
