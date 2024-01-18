#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long rem(2023); bool ans(true);
        while(n--){
            long b; scanf("%ld", &b);
            if(rem % b){ans = false;}
            else{rem /= b;}
        }

        if(ans){
            puts("YES");
            for(long p = 1; p < k; p++){printf("1 ");}
            printf("%ld\n", rem);
        }
        else{puts("NO");}
    }

}
