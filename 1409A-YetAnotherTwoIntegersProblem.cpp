#include <cstdio>

int main(){

    const long N = 10;
    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long diff = a - b; if(diff < 0){diff = -diff;}
        long ans = (diff + N - 1) / N;
        printf("%ld\n", ans);
    }

    return 0;
}
