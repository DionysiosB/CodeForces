#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long last(0), cnt(0);
    for(long p = 0; p < n; p++){
        if(last < a[p] - 1){++cnt; last = a[p] - 1;}
        else if(last < a[p]){++cnt; last = a[p];}
        else if(last < a[p] + 1){++cnt; last = a[p] + 1;}
    }

    printf("%ld\n", cnt);

    return 0;
}
