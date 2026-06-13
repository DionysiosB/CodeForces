#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++m[x];}
        long prev(0), mnc(n + 1);
        for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){
            long num = it->first;
            long cnt = it->second;
            long rem = n - cnt - prev;
            long tst = (rem > prev ? rem : prev);
            mnc = (mnc < tst ? mnc : tst);
            prev += cnt;
        }

        printf("%ld\n", mnc);
    }

}
