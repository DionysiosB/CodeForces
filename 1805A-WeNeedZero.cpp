#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cs(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            cs = cs ^ x;
        }

        if(n % 2){printf("%ld\n", cs);}
        else{printf("%d\n", cs ? -1 : 0);}
    }

}
