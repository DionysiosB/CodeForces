#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); long sa(0);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]); sa += a[p];}
    std::vector<bool> v(101, 0); long tsf(0);
    for(long p = 0; p < n; p++){
        for(long x = 0; x <= a[p]; x++){
            long fp = 100 * x / a[p];
            long tp = 100 * (tsf + x) / sa;
            if(fp == tp){v[fp] = 1;}
        }
        tsf += a[p];
    }

    for(long p = 0; p < v.size(); p++){if(v[p]){printf("%ld\n", p);}}

    return 0;
}
