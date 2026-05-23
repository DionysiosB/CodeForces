#include <cstdio>

int main(){

    long x, y; scanf("%ld %ld\n", &x, &y);
    long n(0); scanf("%ld", &n);

    long output(0);

    if(n % 6 == 0){output = x - y;}
    else if(n % 6 == 1){output = x;}
    else if(n % 6 == 2){output = y;}
    else if(n % 6 == 3){output = y - x;}
    else if(n % 6 == 4){output = -x;}
    else if(n % 6 == 5){output = -y;}

    const long M = 1000000007;
    if(output < 0){output += 2 * M;}
    printf("%ld\n", output % M );

    return 0;
}
