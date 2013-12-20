#include <cstdio>

int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    int first, second; scanf("%d %d", &first, &second);
    if(first < second){first = second;}

    const int numSides(6);
    int nom(numSides - first + 1), den(numSides);
    int div(gcd(nom, den)); nom /= div; den /= div;
    printf("%d/%d", nom, den);
    return 0;
}
