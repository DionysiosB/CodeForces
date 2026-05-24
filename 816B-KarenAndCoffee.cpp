#include <cstdio>
#include <vector>

int main(){

    const long N = 200100;
    std::vector<long> a(N), b(N);
    long n, k, q; scanf("%ld %ld %ld", &n, &k, &q);
    for(long p = 0; p < n; p++){
        long l, r; scanf("%ld %ld", &l, &r);
        ++a[l]; --a[r + 1];
    }

    for(long p = 1; p < N; p++){a[p] += a[p - 1];}
    for(long p = 1; p < N; p++){b[p] += b[p - 1] + (a[p] >= k);}

    while(q--){
        long l, r; scanf("%ld %ld", &l, &r);
        printf("%ld\n", b[r] - b[l - 1]);
    }

    return 0;
}
