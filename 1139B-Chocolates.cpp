#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long mx(1e9 + 11); long long total(0);
    for(long p = n - 1; p >= 0; p--){
        if(mx <= 1){break;}
        if(a[p] >= mx){a[p] = mx - 1;}
        total += a[p];
        mx = a[p]; 
    }

    printf("%lld\n", total);

    return 0;
}
