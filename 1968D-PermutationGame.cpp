#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, k, pb, ps; scanf("%lld %lld %lld %lld", &n, &k, &pb, &ps);
        std::vector<ll> m(n + 1); for(ll p = 1; p <= n; p++){scanf("%lld", &m[p]);}
        std::vector<ll> a(n + 1); for(ll p = 1; p <= n; p++){scanf("%lld", &a[p]);}

        ll idxb(pb), csb(0), kb(k), scoreb(0), mxb(0);
        do{
            scoreb = std::max(scoreb, csb + kb * a[idxb]);
            csb += a[idxb];
            --kb;
            idxb = m[idxb];
        }while(kb && idxb != pb);

        ll idxs(ps), css(0), ks(k), scores(0), mxs(0);
        do{
            scores = std::max(scores, css + ks * a[idxs]);
            css += a[idxs];
            --ks;
            idxs = m[idxs];
        }while(ks && idxs != ps);


        if(scoreb == scores){puts("Draw");}
        else{puts(scoreb > scores ? "Bodya" : "Sasha");}
    }

}
