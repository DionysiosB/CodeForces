#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    long cnt(1), mx(1);
    long prev; scanf("%ld", &prev);
    for(long p = 1; p < n; p++){
        long x; scanf("%ld", &x);
        if(x != prev){++cnt;}
        else{cnt = 1;}
        prev = x;
        mx = (mx > cnt) ? mx : cnt;
    }

    printf("%ld\n", mx);

    return 0;
}
