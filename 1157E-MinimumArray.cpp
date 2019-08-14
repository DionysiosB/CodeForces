#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::multiset<long> s; for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s.insert(x);}

    for(long p = 0; p < n; p++){
        const long x = (2 * n - a[p]) % n;
        std::multiset<long>::iterator it = s.lower_bound(x);
        if(it == s.end()){it = s.begin();}
        printf("%ld ", (a[p] + *it) % n);
        s.erase(it);
    }

    return 0;
}
