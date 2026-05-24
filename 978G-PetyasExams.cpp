#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

struct xm{long s, d, c, r;};
bool xmCompare(xm a, xm b){return a.d < b.d;}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<xm> v(m);
    for(long p = 0; p < m; p++){scanf("%ld %ld %ld", &v[p].s, &v[p].d, &v[p].c); v[p].r = p + 1;}
    sort(v.begin(), v.end(), xmCompare);
    //for(long p = 0; p < m; p++){printf("** %ld %ld %ld %ld\n", v[p].s, v[p].d, v[p].c, v[p].r);}


    std::vector<long> res(n + 1, 0);
    std::vector<long> taken;
    bool possible(true);
    for(long p = 1; p <= n; p++){
        if(!possible){break;}
        for(long u = 0; u < m; u++){
            if(p == v[u].d){
                if(v[u].c > 0){possible = false;}
                else{res[p] = m + 1; taken.push_back(v[u].r);}
                break;
            }
            else if((p >= v[u].s) && (v[u].c > 0)){res[p] = v[u].r; --v[u].c; break;}
        }
    }

    possible &= (taken.size() >= m);

    if(possible){for(long p = 1; p <= n; p++){printf("%ld ", res[p]);}; puts("");}
    else{puts("-1");}

    return 0;
}
