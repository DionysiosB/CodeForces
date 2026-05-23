#include <cstdio>
#include <vector>
#include <algorithm>

int main(){
    
    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]); a[p] += p;}
    sort(a.begin(), a.end());
    for(long p = 1; p < n; p++){if(a[p - 1] == a[p]){puts(":("); return 0;}}
    for(long p = 0; p < n; p++){printf("%ld ", a[p] - p);}
    puts("");
    
    return 0;
}
