#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long n; scanf("%ld", &n);
    std::vector<ll> a(n);
    ll ma(2e9), mb(2e9), mc(2e9);
    for(long p = 0; p < n; p++){
        scanf("%lld", &a[p]);
        if(a[p] < ma){mc = mb; mb = ma; ma = a[p];}
        else if(ma < a[p] && a[p] < mb){mc = mb; mb = a[p];}
        else if(mb < a[p] && a[p] < mc){mc = a[p];}
    }

    ll ta(0), tb(0), tc(0);
    for(long p = 0; p < n; p++){
        if(a[p] == ma){++ta;}
        else if(a[p] == mb){++tb;}
        else if(a[p] == mc){++tc;}
    }

    ll ans(0);
    if(ta >= 3){ans = ta * (ta - 1) * (ta - 2) / 6;}      // 1 1 1 1 1 ...
    else if(ta == 2){ans = tb;}                           // 1 1 2 2 2 2...
    else if(ta == 1 && tb > 1){ans = tb * (tb - 1) / 2;}  // 1 2 2 2 2 2 ...
    else if(ta == 1 && tb == 1){ans = tc;}                // 1 2 3 3 3 3 3...
    else{ans = 0;} //Should never execute this one;

    printf("%lld\n", ans);

    return 0;
}
