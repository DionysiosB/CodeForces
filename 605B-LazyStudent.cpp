#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

struct edge{long num, w, sp;};
bool edgeCompare(edge A, edge B){
    if(A.w < B.w){return true;}
    else if(A.w == B.w && A.sp > B.sp){return true;}
    return false;
}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<edge> d(m);
    for(long p = 0; p < m; p++){d[p].num = p; scanf("%ld %ld", &d[p].w, &d[p].sp);}
    sort(d.begin(), d.end(), edgeCompare);
    long cnt(0), cur(1), left(2), right(2);
    bool possible(true);
    std::vector<std::pair<long, long> > g(m, std::make_pair(1, 1));
    for(long p = 0; p < m; p++){
        if(d[p].sp){g[d[p].num].second = ++cur;}
        else{
            ++left; 
            if(left >= right){
                if(right >= cur){possible = false; break;}
                else{left = 2; ++right;}
            }

            g[d[p].num].first = left;
            g[d[p].num].second = right;
        }
    }

    if(possible){for(long p = 0; p < m; p++){printf("%ld %ld\n", g[p].first, g[p].second);}}
    else{puts("-1");}

    return 0;
}
