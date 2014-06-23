#include <cstdio>

int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}


int main(){

    int a(0), b(0), c(0), d(0); scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(a*d <= b*c){int nom = b*c - a*d; int den = b*c; int commonDiv = gcd(nom, den); printf("%d/%d\n", nom / commonDiv, den / commonDiv);}
    else if(a*d > b*c){int nom = a*d - b*c; int den = a*d; int commonDiv = gcd(nom, den); printf("%d/%d\n", nom / commonDiv, den / commonDiv);}

    return 0;
}
