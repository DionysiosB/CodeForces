#include <cstdio>

int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}


int main(){

    int n(0); scanf("%d", &n);
    int temp(0), final(0);
    for(int k = 0; k < n; k++){scanf("%d", &temp); final = gcd(temp, final);}
    printf("%d\n", n * final);

    return 0;
}
