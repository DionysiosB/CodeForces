#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::set<long> b; for(long p = 0; p < m; p++){long x; scanf("%ld", &x); b.insert(x);}

    std::vector<long> res;
    for(long p = 0; p < n; p++){if(b.count(a[p])){res.push_back(a[p]);}}
    for(long p = 0; p < res.size(); p++){printf("%ld ", res[p]);}
    puts("");

    return 0;
}
