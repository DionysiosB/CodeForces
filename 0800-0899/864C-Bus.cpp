#include <cstdio>

int main(){

    long a, b, f, k; scanf("%ld %ld %ld %ld", &a, &b, &f, &k);
    if(b < f || b < a - f){puts("-1"); return 0;}

    long g(b), count(0);
    for(long p = 1; p <= k; p++){
        if(p & 1){
            g -= f; if(g < 0){puts("-1"); return 0;}
            if(g < (p < k ? 2 : 1) * (a - f)){g = b; ++count;}
            g -= (a - f); if(g < 0){puts("-1"); return 0;}
            
        }
        else{
            g -= (a - f); if(g < 0){puts("-1"); return 0;} 
            if(g < (p < k ? 2 : 1) * f){g = b; ++count;}
            g -= f; if(g < 0){puts("-1"); return 0;}
        }
    }

    printf("%ld\n", count);

    return 0;
}
