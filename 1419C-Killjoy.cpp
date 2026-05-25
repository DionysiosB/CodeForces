#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        long cnt(0), sum(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            cnt += (a == x);
            sum += (a - x);
        }

        if(cnt == n){puts("0");}
        else if(cnt > 0 || sum == 0){puts("1");}
        else{puts("2");}
    }

    return 0;
}
