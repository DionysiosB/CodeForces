#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long lb(0), rb(1e9 + 7);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(p % 2){lb = (lb > x ? lb : x);}
            else{rb = (rb < x ? rb : x);}
        }

        puts((n % 2 == 0) && (lb + 1 < rb) ? "YES" : "NO");
    }

}
