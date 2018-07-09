#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b){
   long la = * ( (long*) a );
   long lb = * ( (long*) b );
   return (la > lb) - (la < lb);
}

int main(){

    long n, l, r; scanf("%ld %ld %ld", &n, &l, &r);
    --l; --r;
    long *a = (long *) malloc(n * sizeof(long));
    long *b = (long *) malloc(n * sizeof(long));
    for(long p = 0; p < n; p++){scanf("%ld", a + p);}
    for(long p = 0; p < n; p++){scanf("%ld", b + p);}

    int possible = 1;
    for(long p = 0; p < l; p++){if(a[p] != b[p]){possible = 0; break;}}
    for(long p = r + 1; p < n; p++){if(a[p] != b[p]){possible = 0; break;}}
    qsort(a, n, sizeof(long), comp);
    qsort(b, n, sizeof(long), comp);
    for(long p = 0; p < n; p++){if(a[p] != b[p]){possible = 0; break;}}
    puts(possible ? "TRUTH" : "LIE");

    return 0;
}
