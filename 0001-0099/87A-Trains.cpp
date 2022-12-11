#include <cstdio>

long gcd(long p, long q){return p % q? gcd(q, p % q): q;}

int main(){

    long a, b; scanf("%ld %ld", &a, &b);
    long g = gcd(a, b);
    a /= g; b /= g;
    if(a == b - 1 || b == a - 1){puts("Equal");}
    else if(a < b){puts("Dasha");}
    else if(a > b){puts("Masha");}
    return 0;

}
