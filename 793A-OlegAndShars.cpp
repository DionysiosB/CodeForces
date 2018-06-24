#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n);
    long mn(1e9);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]); mn = (mn < a[p]) ? mn : a[p];}
    long long total(0);
    for(long p = 0; p < n; p++){
        long diff = a[p] - mn;
        if(diff % k != 0){total = -1; break;}
        else{total += (diff / k);}
    }

    printf("%lld\n", total);

    return 0;
}
