#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<long> defeated(n + 1);
    std::set<long> standing;
    for(long p = 1; p <= n; p++){standing.insert(p);}

    while(m--){
        long l, r, w; scanf("%ld %ld %ld\n", &l, &r, &w);
        std::set<long>::iterator index = standing.lower_bound(l);
        std::vector<long> toErase;
        while(index != standing.end() && (*index) <= r){
            if(*index != w){
                defeated[*index] = w;
                toErase.push_back(*index);
            }
            index++;
        }

        for(long p = 0; p < toErase.size(); p++){standing.erase(toErase[p]);}
    }


    for(long p = 1; p <= n; p++){printf("%ld ", defeated[p]);}; puts("");

    return 0;
}
