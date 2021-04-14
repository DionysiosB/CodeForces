#include <cstdio>
#include <set>

int main(){

    long N = 57;
    long n, q; scanf("%ld %ld", &n, &q);
    std::set<long> k; std::set<std::pair<long, long> > s;
    for(long p = 1; p <= n; p++){
        long x; scanf("%ld", &x);
        if(k.count(x)){continue;}
        s.insert(std::make_pair(p, x));
    }

    for(long p = 0; p < q; p++){
        long target; scanf("%ld", &target);
        long cnt(1);
        std::set<std::pair<long, long> >::iterator it = s.begin();
        for(it = s.begin(); it ->second != target && it != s.end(); it++){++cnt;}
        printf("%ld ", cnt);
        s.erase(it); s.insert(std::make_pair(-p, target));
    }
    puts("");

}
