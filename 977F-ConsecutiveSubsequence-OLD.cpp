#include <cstdio>
#include <vector>
#include <map>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> nxt(n, -1), prv(n, -1), length(n, 1);
    std::map<long, std::vector<long> > m;

    for(long p = 0; p < n; p++){
        if(m.count(a[p] - 1)){
            std::vector<long> v = m[a[p] - 1];
            for(long u = 0; u < v.size(); u++){
                long pos = v[u];
                if(nxt[pos] > 0 && nxt[pos] < p){continue;}
                else{nxt[pos] = p; prv[p] = pos; length[p] = length[pos] + 1;}
            }
        }
        m[a[p]].push_back(p);
    }


    long maxLength(0), last(n + 1);
    for(long p = 0; p < n; p++){
        if(length[p] < maxLength){continue;}
        maxLength = length[p];
        last = p;
    }

    std::vector<long> rv; while(last >= 0){rv.push_back(last); last = prv[last];}

    printf("%ld\n", rv.size());
    for(long p = rv.size() - 1; p >= 0; p--){printf("%ld ", 1 + rv[p]);}
    puts("");

    return 0;
}
