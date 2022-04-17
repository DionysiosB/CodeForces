#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        long cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            ++m[x];
            cnt = (cnt > m[x]) ? cnt : m[x];
        }


        long res(0);
        while(cnt < n){
            long diff = cnt < (n - cnt) ? cnt : (n - cnt);
            res += 1 + diff;
            cnt *= 2;
        }

        printf("%ld\n", res);
    }

}
