#include <cstdio>

int main(){

    long a1,a2,k1,k2,n; scanf("%ld %ld %ld %ld %ld", &a1, &a2, &k1, &k2, &n);
    long mn = (n < ((k1 - 1) * a1 + (k2 - 1) * a2)) ? 0 : (n - (k1 - 1) * a1 - (k2 - 1) * a2);
    
    long kx = (k1 < k2) ? k1 : k2;
    long ax = (k1 < k2) ? a1 : a2;

    long ky = (k1 > k2) ? k1 : k2;
    long ay = (k1 > k2) ? a1 : a2;

    long mx(0);
    if(n > ax * kx){mx += ax; n -= ax * kx; mx += n / ky;}
    else{mx = n / kx;} 

    printf("%ld %ld\n", mn, mx);

    return 0;
}
