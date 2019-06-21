#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> d(n - 1); for(long p = 0; p < n - 1; p++){
        d[p] = a[p + 1] - a[p];
        if(d[p] < 0){d[p] = -d[p];}
    }
    for(long p = 0; p < n - 1; p++){printf("%ld ", d[p]);}; puts("");

    long mx(d[0]), cur(d[0]);
    for(long p = 2; p < n - 1; p += 2){
        cur += d[p] - d[p - 1];
        if(cur < 0){cur = d[p];}
        mx = (mx > cur) ? mx : cur;
    }

    cur = d[1]; mx = (mx > d[1]) ? mx : d[1];
    for(long p = 3; p < n - 1; p += 2){
        cur += d[p] - d[p - 1];
        if(cur < 0){cur = d[p];}
        mx = (mx > cur) ? mx : cur;
    }

    printf("%ld\n", mx);

    return 0;
}
