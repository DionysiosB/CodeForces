#include <cstdio>
#include <vector>
#include <algorithm>

const long N=105;
std::vector<long>a;

int main(){

    long n; scanf("%ld", &n);

    long ciel(0), total(0);
    for(long p = 0; p < n; p++){
        long k; scanf("%ld", &k);
        for(long q = 0; q < k; q++){
            long x; scanf("%ld", &x);
            total += x;
            if(q < k / 2){ciel += x;}
            if(k & 1 && q == k / 2){a.push_back(x);}
        }
    }

    sort(a.rbegin(),a.rend());
    for(long p = 0; p < a.size(); p += 2){ciel += a[p];}
    printf("%ld %ld\n", ciel, total - ciel);

    return 0;
} 
