#include <cstdio>
#include <iostream>
#include <vector>

void dfs(int64_t node, int64_t dist, const std::vector<int64_t> &a, const std::vector<std::vector<std::pair<int64_t, int64_t> > > &tree, int64_t &count){
    if(dist > a[node]) return;
    ++count;
    for(int64_t p = 0; p < tree[node].size(); p++){
        int64_t v = tree[node][p].first;
        int64_t e = tree[node][p].second;
        e += dist; if(e < 0){e = 0;}
        dfs(v, e, a, tree, count);
    }
}

int main(){

    int64_t n; scanf("%lld", &n);
    std::vector<int64_t> a(n + 1);
    for(int64_t p = 1; p <= n; p++){scanf("%lld", &a[p]);}

    std::vector<std::vector<std::pair<int64_t, int64_t> > > tree(n + 1);
    for(int64_t p = 2; p <= n; p++){
        int64_t u, x; scanf("%lld %lld", &u, &x);
        tree[u].push_back(std::make_pair(p, x));
    }

    int64_t count(0);
    dfs(1, 0, a, tree, count);
    printf("%lld\n", (n - count));
    
    return 0;
}
