#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(k);
    for(long p = 0; p < k; p++){scanf("%ld", &a[p]);}
    std::vector<bool> b(n, 1);

    long leader(0);
    for(long p = n; p > n - k; p--){
        long u = a[n - p];
        u %= p;
        long current = leader;
        while(u > 0){++current; current %= n; u -= b[current];}
        printf("%ld ", current + 1);
        b[current] = 0;
        while(true){
            ++current; current %= n;
            if(b[current]){leader = current; break;}
        }
    }

    return 0;
}
