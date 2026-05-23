#include <cstdio>

int main(){

    const long modNumber(1000003);
    int n(0); scanf("%d", &n);
    long output(1);
    for(int k = 0; k < n - 1; k++){output *= 3; output %= modNumber;}
    printf("%ld\n", output);
    return 0;
}
