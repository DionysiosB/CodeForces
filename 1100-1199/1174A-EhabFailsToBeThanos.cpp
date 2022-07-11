#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n); n *= 2;
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    if(a[0] == a.back()){puts("-1");}
    else{for(long p = 0; p < n; p++){printf("%ld ", a[p]);}; puts("");}

    return 0;
}
