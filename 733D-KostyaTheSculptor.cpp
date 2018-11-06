#include <cstdio>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    std::map<std::pair<ll, ll> , std::pair<ll, ll> > mp;
    std::pair<ll, ll> ans;
    ll mx(0);

    long n; scanf("%ld", &n);
    for(int p = 1; p <= n; p++){
        std::vector<ll> v(3); scanf("%lld %lld %lld", &v[0], &v[1], &v[2]);
        sort(v.begin(), v.end());

        if(v[0] > mx){mx = v[0]; ans = std::make_pair(p, -1);}

        do{
            std::pair<ll, ll> cur = std::make_pair(v[0],v[1]);
            if(!mp.count(cur)){mp[cur] = std::make_pair(v[2], p);}
            else {
                ll x = mp[cur].first;
                ll h = std::min(std::min(v[0],v[1]),x + v[2]);
                if(h > mx){mx = h, ans = std::make_pair(mp[cur].second, p);}
                if(x < v[2]){mp[cur] = std::make_pair(v[2], p);}
            }
        }while(std::next_permutation(v.begin(), v.end()));
    }

    if(ans.second < 0){printf("1\n%lld\n", ans.first);}
    else{printf("2\n%lld %lld\n", ans.first, ans.second);}

    return 0;
}
