#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long x(a[0] == 1), y(a[0] == 2);
    long cur(0), mx(0);
    for(long p = 1; p < n; p++){
        if(a[p] == 1 && a[p - 1] == 1){++x;}
        else if(a[p] == 2 && a[p - 1] == 2){++y;}
        else if(a[p] == 1 && a[p - 1] == 2){x = 1;}
        else if(a[p] == 2 && a[p - 1] == 1){y = 1;}
        cur = (x < y) ? x : y; mx = (mx > cur) ? mx : cur;
    }

    printf("%ld\n", 2 * mx);

    return 0;
}
