#include <cstdio>
#include <vector>

int main(){

    const int B = 101;
    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> h(B, 0);

    long s(0);
    for(long p = 0; p < n; p++){
        const long t = a[p];
        long cur(s), rem(0);
        for(long u = B - 1; (cur + t > m) && u > 0; u--){
            long diff = cur + t - m;
            if(diff > u * h[u]){rem += h[u]; cur -= u * h[u];}
            else{const long x = (diff + u - 1) / u; rem += x; cur -= x * u; break;}
        }

        printf("%ld ", rem);
        ++h[t]; s += t;
    }

    puts("");

    return 0;
}
