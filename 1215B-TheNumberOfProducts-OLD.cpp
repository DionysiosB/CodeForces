#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n + 1); for(long p = 1; p <= n; p++){scanf("%lld", &a[p]);}
    std::vector<ll> fpos(n + 1, 0), fneg(n + 1, 0);
    ll spos(0), sneg(0);
    for(long p = 1; p <= n; p++){
        if(a[p] > 0){fpos[p] = 1 + fpos[p - 1]; fneg[p] = fneg[p - 1];}
        else if(a[p] < 0){fpos[p] = fneg[p - 1]; fneg[p] = 1 + fpos[p - 1];}
        sneg += fneg[p]; spos += fpos[p]; 
    }

    printf("%lld %lld\n", sneg, spos);

    return 0;
}
