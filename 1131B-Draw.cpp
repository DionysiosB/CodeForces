#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long cnt(1), a(0), b(0);
    while(n--){
        long x, y; scanf("%ld %ld", &x, &y);
        long mx = (a > b) ? a : b;
        long mn = (x < y) ? x : y;
        long diff = (mn > mx) ? (mn - mx) : 0;
        cnt += diff + (mn >= mx) * (a != b);
        a = x; b = y;
    }

    printf("%ld\n", cnt);

    return 0;
}
