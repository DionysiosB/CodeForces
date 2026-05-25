#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long ans(0);
        if(a < b){long x = a; a = b; b = x;}
        if(a > 2 * b){ans = b;}
        else{
            long diff = a - b;
            a -= 2 * diff; b -= diff;
            ans = diff + (2 * b / 3);
        }

        printf("%ld\n", ans);
    }

    return 0;
}
