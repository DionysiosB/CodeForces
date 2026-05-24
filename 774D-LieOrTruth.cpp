#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, l, r; scanf("%ld %ld %ld", &n, &l, &r);
    std::vector<long> a(n + 1), b(n + 1);
    for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
    for(long p = 1; p <= n; p++){scanf("%ld", &b[p]);}

    bool possible(true);
    for(long p = 1; p < l; p++){if(a[p] != b[p]){possible = false; break;}}
    for(long p = r + 1; p <= n; p++){if(a[p] != b[p]){possible = false; break;}}
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(long p = 1; p <= n; p++){if(a[p] != b[p]){possible = false; break;}}
    puts(possible ? "TRUTH" : "LIE");

    return 0;
}
