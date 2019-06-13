#include <cstdio>
#include <iostream>
#include <vector>
#include <map>

int main(){

    long k; scanf("%ld", &k);
    std::map<long, std::pair<long, long> > m;
    std::pair<long, long> a, b;
    bool done(false);

    for(long seq = 1; seq <= k; seq++){
        if(done){break;}
        long n; scanf("%ld", &n);
        std::vector<long> v(n + 1); long s(0);
        for(long p = 1; p <= n; p++){scanf("%ld", &v[p]); s += v[p];}
        for(long p = 1; p <= n; p++){
            long partial = s - v[p];
            std::pair<long, long> where = std::make_pair(seq, p);
            if(m.count(partial) && m[partial].first < seq){a = m[partial]; b = where; done = true;}
            else{m[partial] = where;}
        }
    }

    if(done){printf("YES\n%ld %ld\n%ld %ld\n", a.first, a.second, b.first, b.second);}
    else{puts("NO");}

    return 0;
}
