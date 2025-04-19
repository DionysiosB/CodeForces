#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, k; scanf("%ld %ld", &x, &k);
        if(x == 1){puts(k == 2 ? "Yes" : "No"); continue;}
        else if(k > 1){puts("No"); continue;}

        bool ans(true);
        for(long p = 2; p * p <= x; p++){
            if(x % p){continue;}
            ans = false; break;
        }
        
        puts(ans ? "Yes" : "No");
    }

}
