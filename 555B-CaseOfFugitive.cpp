#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int64_t n, m; scanf("%lld %lld", &n, &m);
    std::vector<std::pair<int64_t, int64_t> > islands(n);
    for(int64_t p = 0; p < n; p++){
        int64_t l, r; scanf("%lld %lld", &l, &r);
        islands[p] = std::make_pair(l, r);
    }

    std::vector<std::pair<int64_t, int64_t> > dist(n - 1);
    for(int64_t p = 0; p < n - 1; p++){
        int64_t d = islands[p + 1].first - islands[p].second;
        dist[p] = std::make_pair(d, p);
    }


    std::vector<std::pair<int64_t, int64_t> > bridge(m);
    for(int64_t p = 0; p < m; p++){
        int64_t len; scanf("%lld", &len);
        bridge[p] = std::make_pair(len, p);
    }

    sort(dist.begin(), dist.end());
    sort(bridge.begin(), bridge.end());

    int64_t index(0);
    bool possible(true);
    std::vector<int64_t> res(n - 1, -1);
    for(int64_t p = 0; p < n - 1; p++){
        int64_t req = dist[p].first;
        while(index < m && bridge[index].first < req){++index;}
        if(index >= m){possible = false; break;}
        int64_t isle = dist[p].second;
        int64_t overboard = islands[isle + 1].second - islands[isle].first;
        if(bridge[index].first > overboard){possible = false; break;}
        res[dist[p].second] = bridge[index].second;
        ++index;
    }

    if(possible){
        puts("Yes");
        for(int64_t p = 0; p < n - 1; p++){printf("%lld ", 1 + res[p]);}
        puts("");
    }
    else{puts("No");}

    return 0;
}
