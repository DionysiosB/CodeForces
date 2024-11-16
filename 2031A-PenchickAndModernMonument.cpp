#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        long mxcnt(0);
        for(long p = 0; p < n; p++){
            long h; scanf("%ld", &h);
            ++m[h];
            mxcnt = (mxcnt > m[h] ? mxcnt : m[h]);
        }

        printf("%ld\n", n - mxcnt);
    }

}
