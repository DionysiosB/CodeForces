#include <cstdio>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long a(0), b(0); scanf("%ld %ld", &a, &b);
    long common = gcd(a,b);
    long first(a/common), second(b/common), total(0);

    while(first % 2 == 0){first /= 2; ++total;}
    while(first % 3 == 0){first /= 3; ++total;}
    while(first % 5 == 0){first /= 5; ++total;}

    while(second % 2 == 0){second /= 2; ++total;}
    while(second % 3 == 0){second /= 3; ++total;}
    while(second % 5 == 0){second /= 5; ++total;}

    if(first > 1 || second > 1){puts("-1");}
    else{printf("%ld\n", total);}

    return 0;
}
