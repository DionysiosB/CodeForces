#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

bool check(const std::vector<ll> &sv, ll med, const ll budget){

    ll left(0), right(0), sum(0);
    for(ll p = 0; p < sv.size(); p++){
        if(sv[p].first < m){++left; sum += (sv[p].second > m) ? sv[p].second : m;}
        if(sv[p].first < m){++left; sum += (sv[p].second > m) ? sv[p].second : m;}
    }

    return (

}



int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, s; scanf("%lld %lld", &n, &s);
        std::vector<ll> vl(n), vr(n); std::vector<std::pair<ll, ll> > v(n); 
        for(ll p = 0; p < n; p++){scanf("%lld %lld", &v[p].first, &v[p].second); vl[p] = v[p].first; vr[p] = v[p].second;}
        sort(vl.begin(), vl.end());
        sort(vr.begin(), vr.end());
        ll left(vl[n / 2]), right(vr[n / 2]);
        ll res(left);
        while(left <= right){
            ll mid = (left + right) / 2;
            if(check(v, mid)){res = mid; left = mid + 1;}
            else{right = mid - 1;}
        }
        
        printf("%lld\n", res);
    }

    return 0;
}
