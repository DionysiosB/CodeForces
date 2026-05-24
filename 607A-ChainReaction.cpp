#include <cstdio>
#include <vector>

int main(){

    const long M = 1000001;
    std::vector<long> v(M, 0);

    long n; scanf("%ld", &n);
    for(long p = 0; p < n; p++){long a, b; scanf("%ld %ld", &a, &b); v[a] = b;}

    long max(0);
    std::vector<long> f(M, 0);
    f[0] = (v[0] > 0) ? 1 : 0;
    for(long p = 1; p < M; p++){
        if(v[p] > 0){
            if(p - v[p] - 1 < 0){f[p] = 1;}
            else{f[p] = f[p - v[p] - 1] + 1;}
        }
        else{f[p] = f[p - 1];}
        max = (f[p] > max) ? f[p] : max;
    }

    printf("%ld\n", n - max);

    return 0;
}
