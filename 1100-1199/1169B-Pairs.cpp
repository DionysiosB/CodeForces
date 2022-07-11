#include <cstdio>
#include <vector>
#include <map>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > v(m, std::vector<long>(2, 0));
    for(long p = 0; p < m; p++){scanf("%ld %ld", &v[p][0], &v[p][1]);}

    bool res(false);
    for(long idx = 0; idx <= 1; idx++){
        long x(v[0][idx]), y(-1), cnt(0);
        std::map<long, long> trm;
        for(long p = 1; p < m; p++){
            if(v[p][0] == x || v[p][1] == x){continue;}
            ++cnt; ++trm[v[p][0]]; ++trm[v[p][1]];
            if(trm[v[p][0]] < cnt && trm[v[p][1]] < cnt){break;}
            else if(trm[v[p][0]] == cnt){y = v[p][0];}
            else if(trm[v[p][1]] == cnt){y = v[p][1];}
        }

        res = (trm[y] == cnt);
        if(res){break;}
    }

    puts(res ? "YES" : "NO");

    return 0;
}
