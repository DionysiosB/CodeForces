#include <cstdio>

int main(){
    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        if(k == 1){printf("%ld\n", n); continue;}
        long cnt(0);
        while(n){cnt += n % k; n /= k;}
        printf("%ld\n", cnt);
    }
}
