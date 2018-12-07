#include <cstdio>
#include <iostream>
#include <queue>
typedef long long ll;

int main(){

    ll n, b; scanf("%lld %lld", &n, &b);
    std::queue<std::pair<ll, ll> > q;
    std::vector<ll> f(n);

    ll t(0);
    for(ll p = 0; p < n; p++){
        ll arr, dur; scanf("%lld %lld", &arr, &dur);
        while(!q.empty() && t <= arr){
            std::pair<ll, ll> task = q.front(); q.pop();
            t += task.second;
            f[task.first] = t;
        }

        t = (t > arr) ? t : arr;
        if(q.size() < b){q.push(std::make_pair(p, dur));}
        else{f[p] = -1;}
    }

    while(!q.empty()){
        std::pair<ll, ll> task = q.front(); q.pop();
        t += task.second;
        f[task.first] = t;
    }

    for(ll p = 0; p < n; p++){printf("%lld ", f[p]);}
    puts("");

    return 0;
}
