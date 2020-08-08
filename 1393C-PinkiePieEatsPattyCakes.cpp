#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> cnt;
        long mx(0), rep(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x); ++cnt[x];
            if(cnt[x] > mx){mx = cnt[x]; rep = 1;}
            else if(cnt[x] == mx){++rep;}
        }

        long ans = (n - rep) / (mx - 1) - 1;
        printf("%ld\n", ans);
    }

    return 0;
}
