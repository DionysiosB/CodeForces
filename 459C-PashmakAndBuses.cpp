#include <cstdio>

int main(){

    long long n, k, d; scanf("%lld %lld %lld\n", &n, &k, &d);

    long long total = 1; 
    bool possible = 0;
    for(long p = 0; p < d; p++){total *= k; if(total >= n){possible = 1; break;}}
    if(!possible){puts("-1"); return 0;}

    long long div = 1;

    for(long long day = 0; day < d; day++){
        for(long long student = 0; student < n; student++){
            printf("%lld ", 1 + (student / div) % k);
        }
        printf("\n"); if(div < n){div *=k;}
    }
    
    return 0;
}
