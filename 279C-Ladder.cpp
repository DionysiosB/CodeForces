#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> before(n, 0), after(n, n - 1);
    for(long p = 1; p < n; p++){before[p] = (a[p - 1] >= a[p]) ? before[p - 1] : p;}
    for(long p = n - 2; p >= 0; p--){after[p] = (a[p] <= a[p + 1]) ? after[p + 1] : p;}

    while(m--){
        long l, r; scanf("%ld %ld", &l, &r); 
        puts((before[r - 1] <= after[l - 1]) ? "Yes" : "No");
    }

    return 0;
}
