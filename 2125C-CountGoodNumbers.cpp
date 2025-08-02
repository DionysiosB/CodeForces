#include<cstdio>
typedef long long ll;

ll getCount(ll x, const ll LCM, const ll seg_cnt){
    ll cnt = (x / LCM) * seg_cnt;
    x %= LCM;
    for(ll p = 1; p <= x; p++){cnt += (p % 2 && p % 3 && p % 5 && p % 7);}
    return cnt;
}

int main(){

    const ll L = 210; //2 * 3 * 5 * 7
    ll g(0); for(ll p = 1; p < L; p++){g += (p % 2 && p % 3 && p % 5 && p % 7);}

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        ll res = getCount(b, L, g) - getCount(a - 1, L, g);
        printf("%lld\n", res);
    }

}
