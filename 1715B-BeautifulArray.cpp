#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, k, b, s; scanf("%lld %lld %lld %lld", &n, &k, &b, &s);
        long mn = (s - (n - 1) * (k - 1)) / k;
        long mx = s  / k;
        if(b < mn || mx < b){puts("-1"); continue;}
        ll cur = b * k + k - 1;
        cur = (s < cur) ? s : cur;
        printf("%lld ", cur);
        ll rem(s - cur);
        for(long p = 1; p < n; p++){
            cur = (rem < (k - 1)) ? rem : (k - 1);
            rem -= cur;
            printf("%lld ", cur);
        }

        puts("");
    }

}
