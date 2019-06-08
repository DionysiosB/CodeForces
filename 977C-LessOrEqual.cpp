#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    if(k == 0){puts((a[0] == 1) ? "-1" : "1");}
    else if(k == n){printf("%ld\n", a.back());}
    else if(a[k - 1] == a[k]){puts("-1");}
    else{printf("%ld\n", a[k - 1]);}

    return 0;
}
