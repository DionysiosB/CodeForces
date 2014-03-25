#include <cstdio>

int main(){

    long d(0); scanf("%ld", &d);
    int n(0); scanf("%d", &n);
    long *days = new long[n];
    for(int k = 0; k < n; k++){scanf("%ld", days + k);}

    unsigned long total(0); for(int k = 0; k < n - 1; k++){total += d - days[k];}
    printf("%lu\n", total); 

    return 0;
}
