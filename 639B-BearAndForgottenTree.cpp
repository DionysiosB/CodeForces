#include <cstdio>

int main(){

    long n, d, h; scanf("%ld %ld %ld\n", &n, &d, &h);
    if((d <= 1 && n > 2) || 2 * h < d){puts("-1"); return 0;}

    long current(2);
    while(h--){printf("%ld %ld\n", current - 1, current); ++current; --d;}
    long start(2), altRoot(2);
    if(d > 0){
        start = 1;
        altRoot = 1;
        while(d--){printf("%ld %ld\n", start, current); start = current++;}
    }
    while(current <= n){printf("%ld %ld\n", altRoot, current); ++current;}

    return 0;
}
