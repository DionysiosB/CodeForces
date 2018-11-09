#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> dest(n + 1);
    for(ll p = 1; p <= n; p++){scanf("%lld", &dest[p]);}

    std::vector<bool> visited(n + 1, 0);
    std::vector<ll> vl;
    for(ll p = 1; p <= n; p++){
        if(visited[p]){continue;}
        ll length(0), cur(p);
        while(!visited[cur]){visited[cur] = true; ++length; cur = dest[cur];}
        vl.push_back(length);
    }

    if(vl.size() <= 1){printf("%lld\n", vl[0] * vl[0]);}
    else{
        sort(vl.begin(), vl.end());
        ll x = vl.back(); vl.pop_back();
        ll y = vl.back(); vl.pop_back();
        ll conv = (x + y) * (x + y);
        for(ll p = 0; p < vl.size(); p++){conv += vl[p] * vl[p];}
        printf("%lld\n", conv);
    }

    return 0;
}
