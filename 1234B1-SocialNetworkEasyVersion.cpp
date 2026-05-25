#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::set<long> s;
    std::vector<long> v(k, 0);
    long idx(0);
    for(long p = 0; p < n; p++){
        long w; scanf("%ld", &w);
        if(s.count(w)){continue;}
        s.erase(v[idx]); s.insert(w);
        v[idx++] = w; idx %= k;
    }

    printf("%ld\n", s.size());
    long start = (idx - 1 + k) % k;
    for(long p = 0; p < k; p++){
        long id = v[(k + start - p) % k];
        if(id <= 0){continue;}
        printf("%ld ", id);
    }
    puts("");

    return 0;
}
