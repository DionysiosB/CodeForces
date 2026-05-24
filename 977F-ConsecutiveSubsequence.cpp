#include <cstdio>
#include <vector>
#include <map>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long mx(-1), pos(-1); std::map<long, long> f;

    for(long p = 0; p < n; p++){
        if(!(f.count(a[p]))){f[a[p]] = 1;}
        long cnt = 1 + (f.count(a[p] - 1) ? f[a[p] - 1] : 0);
        f[a[p]] = (f[a[p]] > cnt) ? f[a[p]] : cnt;
        if(f[a[p]] > mx){mx = f[a[p]]; pos = p;}
    }

    std::vector<long> v;
    long cur = a[pos];
    for(long p = n - 1; p >= 0; p--){
        if(a[p] != cur){continue;}
        v.push_back(p); --cur;
    }

    printf("%ld\n", v.size());
    for(long p = v.size() - 1; p >= 0; p--){printf("%ld ", 1 + v[p]);}
    puts("");

    return 0;
}
