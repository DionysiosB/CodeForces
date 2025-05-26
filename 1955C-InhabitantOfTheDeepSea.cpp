#include <cstdio>
#include <vector>
#include <deque>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);
        std::deque<ll> dq(n);
        for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); dq.push_back(x);}
        while(k && dq.size() > 1){
            int mn = (dq.front() < dq.back() ? dq.front() : dq.back());
            int rem = (k < (2 * mn) ? k : (2 * mn));
            dq.front() -= (rem + 1) / 2;
            dq.back()  -= (rem / 2);
            if(dq.front() == 0){dq.pop_front();}
            if(dq.back() == 0){dq.pop_back();}
            k -= rem;
        }

        if(!dq.empty()){
            dq.front() -= k;
            if(dq.front() <= 0){dq.pop_front();}
        }

        printf("%lld\n", n - dq.size());
    }

}
