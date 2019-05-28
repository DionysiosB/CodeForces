#include <cstdio>
#include <vector>

int main(){

    const long S = 2001;
    long cur(1); std::vector<long> v;
    long n; scanf("%ld", &n);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        if(x == cur){v.push_back(p); ++cur;}
    }

    printf("%ld\n", v.size());
    for(long p = 0; p < v.size(); p++){printf("%ld ", S + v[p]);}
    puts("");

    return 0;
}
