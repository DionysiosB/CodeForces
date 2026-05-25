#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.rbegin(), a.rend());
    long last(-1); if(n % 2 == 0){last = a.back(); a.pop_back();}
    std::vector<long> b(a.size());
    long idx(0); 
    for(long p = 0; p < n; p += 2){b[p] = a[idx++];}
    for(long p = 1; p < n; p += 2){b[p] = a[idx++];}
    if(last > 0){b.push_back(last);}
    printf("%ld\n", (n - 1) / 2);
    for(long p = 0; p < b.size(); p++){printf("%ld ", b[p]);}
    puts("");

    return 0;
}
