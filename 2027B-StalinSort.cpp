#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        long mxlen(0);
        for(long p = 0; p < n; p++){
            long cnt(1);
            for(long q = p + 1; q < n; q++){cnt += (v[q] <= v[p]);}
            mxlen = (mxlen > cnt ? mxlen : cnt);
        }

        printf("%ld\n", n - mxlen);
    }

}
