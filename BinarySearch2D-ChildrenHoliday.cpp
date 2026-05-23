#include <cstdio>
#include <vector>
typedef long long ll;

struct assistant{ll t, z, y;};

bool check(const std::vector<assistant> &a, ll m, ll x){
    ll cnt(0);
    for(long p = 0; p < a.size(); p++){
        ll bt = a[p].t * a[p].z + a[p].y;
        ll bn = x / bt;
        ll rn = (x % bt); rn = (rn < a[p].t * a[p].z) ? rn : a[p].t * a[p].z;
        ll num = bn * a[p].z + rn / a[p].t;
        cnt += num;
        if(cnt >= m){return true;}
    }

    return false;
}

int main(){

    ll m, n; scanf("%lld %lld", &m, &n);
    std::vector<assistant> a(n);
    for(ll p = 0; p < n; p++){scanf("%lld %lld %lld", &a[p].t, &a[p].z, &a[p].y);}
    ll left(0), right(1e18), res(0);
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(a, m, mid)){res = mid; right = mid - 1;}
        else{left = mid + 1;}
    }

    printf("%lld\n", res);
    ll rem(m);
    for(long p = 0; p < a.size(); p++){
        ll bt = a[p].t * a[p].z + a[p].y;
        ll bn = res / bt;
        ll rn = (res % bt); rn = (rn < a[p].t * a[p].z) ? rn : a[p].t * a[p].z;
        ll num = bn * a[p].z + rn / a[p].t;
        num = (num < rem) ? num : rem;
        rem -= num;
        printf("%lld ", num);
    }
    puts("");
    
    return 0;
}
