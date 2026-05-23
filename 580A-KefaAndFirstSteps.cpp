#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    long currentMax(1);
    long ans(1);
    for(long p = 1; p < n; p++){
        if(a[p] >= a[p - 1]){++currentMax;}
        else{currentMax = 1;}
        if(currentMax > ans){ans = currentMax;}
    }

    printf("%ld\n", ans);

    return 0;
}
