#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(2 * n);
    for(long p = 0; p < 2 * n; p++){scanf("%ld", &a[p]);}
    long cnt(0);
    for(long p = 0; p < 2 * n; p++){
        if(!a[p]){continue;}
        long q;
        for(q = p + 1; q < 2 * n && a[q] != a[p]; q++){cnt += (a[q] > 0);}
        a[q] = 0;
    }

    printf("%ld\n", cnt);


    return 0;
}
