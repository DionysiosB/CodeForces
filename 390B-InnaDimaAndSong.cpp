#include <cstdio>

int main(){

    long n(0); scanf("%ld", &n);
    long long *a = new long long[n];
    long long *b = new long long[n];
    
    for(long k = 0; k < n; k++){scanf("%lld", a + k);}
    for(long k = 0; k < n; k++){scanf("%lld", b + k);}

    long long total(0);
    for(long k = 0; k < n; k++){
        if(b[k] > 1 && b[k] <= 2 * a[k]){total += (b[k] / 2) * (b[k] - b[k]/2);}
        else{--total;}
    }

    printf("%lld\n", total);

    delete[] a; delete[] b;
    return 0;
}
