#include <cstdio>

int main(){

    long n, L, a; scanf("%ld %ld %ld", &n, &L, &a);
    long cur(0), cnt(0);
    while(n--){
        long t, l; scanf("%ld %ld", &t, &l); 
        cnt += (t - cur) / a;
        cur = t + l;
    }

    cnt += (L - cur) / a;

    printf("%ld\n", cnt);

    return 0;
}
