#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, q; scanf("%lld %lld", &n, &q);
        std::vector<ll> a(n + 1, 0), b(n + 1, 0), c(1, 0), d(1, 0);
        for(ll p = 1; p <= n; p++){
            scanf("%lld", &a[p]);
            b[p] = b[p - 1] + a[p];
            if(a[p] > c.back()){c.push_back(a[p]); d.push_back(p);}
        }

        c.push_back(2e9); d.push_back(n + 1);

        while(q--){
            ll k; scanf("%lld", &k);
            ll left(0), right(c.size() - 1), res(0);
            while(left <= right){
                ll mid = (left + right) / 2;
                ll chk = c[mid];
                if(k < chk){res = b[d[mid] - 1]; right = mid - 1;}
                else{left = mid + 1;}
            }

            printf("%lld ", res);
        }
        puts("");

    }

}
