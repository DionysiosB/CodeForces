#include <cstdio>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    long m; scanf("%ld", &m);
    std::multiset<long> s;
    long mx(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x); s.insert(x);
        mx = (mx > x) ? mx : x;
    }
    for(long p = 0; p < m; p++){
        long b = (*s.begin()) + 1;
        s.erase(s.begin());
        s.insert(b);
    }

    printf("%ld %ld\n", *s.rbegin(), mx + m);

    return 0;
}
