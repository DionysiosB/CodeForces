#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long long cs(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == 1){--cs;}
            else{cs += (x - 1);}
        }

        puts((n > 1) && (cs >= 0) ? "YES" : "NO");
    }

}
