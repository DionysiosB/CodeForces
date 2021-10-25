#include <cstdio>
#include <vector>

int main(){


    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n + 2, 0); a[n + 1] = m;
    for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}

    long orig(0), off(0), mx(0);

    for(long p = n; p >= 0; p--){
        if(p % 2){off += a[p + 1] - a[p];}
        else{orig += a[p + 1] - a[p];}
        mx = (mx > off - orig) ? mx : (off - orig);
    }

    printf("%ld\n", orig + (mx > 0) * (mx - 1));

    return 0;
}
