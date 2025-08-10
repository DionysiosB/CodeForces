#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::map<long, long> m;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            x %= k;
            if(x > k - x){x = k - x;}
            ++m[x];
        }

        for(long p = 0; p < n; p++){
            long y; scanf("%ld", &y);
            y %= k;
            if(y > k - y){y = k - y;}
            --m[y];
        }

        bool ans(true);
        for(std::pair<long, long> z : m){if(z.second){ans = false; break;}}
        puts(ans ? "YES" : "NO");
    }

}
