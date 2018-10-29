#include <cstdio>
#include <vector>

long find(long x, std::vector<long> &v){return (v[x] == x) ? x : (v[x] = find(v[x], v));}

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> f(n + 1, 0); for(long p = 1; p <= n; p++){f[p] = p;}
    std::vector<std::pair<long, long> > rem;
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        long r = find(x, f); long s = find(y, f);
        if(r == s){rem.push_back(std::make_pair(x, y));}
        else{f[s] = r;}
    }

    std::vector<std::pair<long, long> > add;
    for(long p = 2; p <= n; p++){
        if(find(p, f) == find(1, f)){continue;}
        add.push_back(std::make_pair(find(p, f), 1));
        f[find(p, f)] = find(1, f);
    }

    printf("%ld\n", rem.size());
    for(long p = 0; p < rem.size(); p++){printf("%ld %ld %ld %ld\n", rem[p].first, rem[p].second, add[p].first, add[p].second);}

    return 0;
}
