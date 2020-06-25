#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, n; scanf("%ld %ld %ld", &a, &b, &n);
        long cnt(0);
        while(a <= n && b <= n){
            if(a < b){a += b;}
            else{b += a;}
            ++cnt;
        }

        printf("%ld\n", cnt);
    }

    return 0;
}
