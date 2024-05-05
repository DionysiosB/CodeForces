#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    if(n <= 1){printf("0\n%ld\n",a[0]); return 0;}
    sort(a.rbegin(), a.rend());
    
    std::vector<long> b(n, -1);
    for(long p = 1; p < n; p += 2){b[p] = a.back(); a.pop_back();}
    for(long p = 0; p < n; p++){if(b[p] < 0){b[p] = a.back(); a.pop_back();}}

    long cnt(0);
    for(long p = 1; p + 1 < n; p++){cnt += (b[p - 1] > b[p] && b[p] < b[p + 1]);}

    printf("%ld\n", cnt);
    for(long p = 0; p < n; p++){printf("%ld ", b[p]);}
    puts("");

    return 0;
}
