#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1, 0);
    for(long p = 1; p < 10 && p <= n; p++){a[p] = 1;}
    for(long p = 10; p <= n; p++){
        int md(0);
        long x = p; while(x > 0){md = (md > (x % 10)) ? md : (x % 10); x /= 10;}
        a[p] = a[p - md] + 1;
    }

    printf("%ld\n", a[n]);

    return 0;
}
