#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, s; scanf("%lld %lld", &n, &s);
    std::vector<ll> a(2 * n, 0);
    ll total(0);
    for(ll p = 0; p < n; p++){
        scanf("%lld", &a[p]);
        a[p + n] = a[p];
        total += a[p];
    }
    ll loop = s / total; s %= total;

    ll left(0), cur(0), num(0), start(1);
    for(ll p = 0; s && p < 2 * n; p++){
        cur += a[p];
        while(cur > s + a[left]){cur -= a[left]; ++left;}
        if(cur < s){continue;}
        ll len = p - left + 1;
        if(num <= 0 || len < num){start = left + 1; num = len;}
    }

    num += loop * n;
    printf("%lld %lld\n", start, num);
}
