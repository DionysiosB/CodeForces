#include <cstdio>

int main(){

    long n, c; scanf("%ld %ld\n", &n, &c);
    long long count(0), prev(0);
    for(long p = 0; p < n; p++){
        long t; scanf("%ld", &t);
        if(t - prev <= c){++count;}
        else{count = 1;}
        prev = t;
    }

    printf("%lld\n", count);

    return 0;
}
