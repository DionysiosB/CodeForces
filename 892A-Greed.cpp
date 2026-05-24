#include <cstdio>
typedef long long ll;

int main(){

    long n; scanf("%ld", &n);
    ll vol(0), bs(0), bm(0);
    for(long p = 0; p < n; p++){ll a; scanf("%lld", &a); vol += a;}
    for(long p = 0; p < n; p++){
        ll b; scanf("%lld", &b);
        if(b >= bm){bs = bm; bm = b;}
        else if(b >= bs){bs = b;}
    }

    puts(vol <= (bs + bm) ? "YES" : "NO");

    return 0;
}
