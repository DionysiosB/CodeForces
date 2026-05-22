#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long total(0), temp(0);
    for(int k = 0; k < n; k++){scanf("%ld", &temp); total += temp;}
    long output(0);
    (total % n == 0) ? output = n : output = (n - 1);
    printf("%ld\n", output);
    return 0;
}
