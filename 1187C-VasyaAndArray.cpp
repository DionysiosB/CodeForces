#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::pair<std::pair<long, long> , long> > v(m);
    for(long p = 0; p < m; p++){
        long t, l, r; scanf("%ld %ld %ld", &t, &l, &r);
        v[p].first = std::make_pair(l - 1, r - 1);
        v[p].second = t;
    }

    sort(v.begin(), v.end());

    long idx(-1);
    std::vector<long> res(n, -1);
    for(long p = 0; p < m; p++){
        if(v[p].second){
            for(long u = l; u <= r; u++){res[u] = 

    }


    return 0;
}
