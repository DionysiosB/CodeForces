#include <cstdio>
#include <vector>
typedef long long ll;

bool check(const std::vector<ll> &left, const std::vector<ll> &right, ll k, ll x){
    ll cnt(0);
    for(ll p = 0; p < left.size(); p++){
        if(x < left[p]){continue;}
        ll cur = ((x < right[p]) ? x : right[p]) - left[p] + 1;
        cnt += cur;
        if(cnt >= k){return true;}
    }

    return false;
}

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<ll> left(n), right(n);
    for(ll p = 0; p < n; p++){scanf("%lld %lld", &left[p], &right[p]);}

    ll low(-1e15), high(1e15), res(0);
    while(low <= high){
        ll mid = (low + high) / 2;
        if(check(left, right, k + 1, mid)){res = mid; high = mid - 1;}
        else{low = mid + 1;} 
    }

    printf("%lld\n", res);

    return 0;
}
