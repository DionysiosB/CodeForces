#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;


int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> a(n);
    for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());

    ll prev(0), rem(0);
    for(long p = 0; p < n; p++){
        if(a[p] > prev){
            rem += prev;
            prev = a[p];
        }
        else{rem += (prev > 1 ? (prev - 1) : 1);}
    }


    printf("%lld\n", rem);

    return 0;
}
