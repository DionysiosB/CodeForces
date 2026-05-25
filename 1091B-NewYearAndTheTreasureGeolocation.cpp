#include <cstdio>
#include <iostream>
#include <vector>
#include <map>

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::pair<long, long> > s(n);
    for(long p = 0; p < n; p++){long x, y; scanf("%ld %ld", &x, &y); s[p] = std::make_pair(x, y);}
    std::vector<std::pair<long, long> > t(n);
    for(long p = 0; p < n; p++){long a, b; scanf("%ld %ld", &a, &b); t[p] = std::make_pair(a, b);}

    std::map<std::pair<long, long>, long> cnt;
    long maxcnt(0); std::pair<long, long> ans;
    for(long p = 0; p < n; p++){
        for(long q = 0; q < n; q++){
            long u = s[p].first + t[q].first;
            long v = s[p].second + t[q].second;
            std::pair<long, long> cand = std::make_pair(u, v);
            if(!cnt.count(cand)){cnt[cand] = 0;}
            ++cnt[cand];
            if(cnt[cand] > maxcnt){maxcnt = cnt[cand]; ans = cand;}
        }
    }

    printf("%ld %ld\n", ans.first, ans.second);


    return 0;
}
