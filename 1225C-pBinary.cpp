#include <cstdio>

long bitcount(long x){
    long cnt(0);
    while(x > 0){cnt += x % 2; x /= 2;}
    return cnt;
}

int main(){

    long n, p; scanf("%ld %ld", &n, &p);
    long res(-1);
    for(long a = 0; a < 32; a++){
        long tmp = n - a * p;
        if(bitcount(tmp) <= a && a <= tmp){res = a; break;}
    }

    printf("%ld\n", res);

    return 0;
}
