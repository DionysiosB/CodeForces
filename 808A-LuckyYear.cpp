#include<cstdio>

int main(){

    long long n; scanf("%lld", &n);
    int count(0), msb(0);
    long long q = n, r(1);
    while(q > 0){msb = (q % 10); r *= 10; q /= 10;}
    r /= 10; r *= (msb + 1); 
    printf("%lld\n", r - n);

    return 0;
}
