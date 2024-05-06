#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        ll res(-1);
        for(ll p = 1; p <= m; p++){res += (n + p) / (p * p);}
        printf("%lld\n", res);
    }

}
