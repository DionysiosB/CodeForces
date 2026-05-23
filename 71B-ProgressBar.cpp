#include <cstdio>

int main(){

    int n(0), k(0), t(0); scanf("%d %d %d", &n, &k, &t);
    
    int full(n * t / 100);
    int partial((n * t - 100 * full) * k / 100);

    for(int p = 0; p < full; p++){printf("%d ", k);}
    if(full < n){
        printf("%d ", partial);
        for(int p = 0; p < n - full - 1; p++){printf("0 ");}
    }
    puts("");

    return 0;
}
