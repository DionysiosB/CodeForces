#include <cstdio>

int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    int n(0), m(0); scanf("%d %d", &n, &m);
    int nom(0), den(0), dummy(0);
    scanf("%d", &nom); for(int k = 0; k < n; k++){scanf("%d", &dummy);} scanf("%d", &den);

    if(n < m){puts("0/1");}
    else if(n > m){
        if(nom * den < 0){printf("-");}
        puts("Infinity");
    }
    else if(n == m){
        if(nom * den < 0){printf("-");}
        if(nom < 0){nom = -nom;}
        if(den < 0){den = -den;}
        printf("%d/%d\n", nom / gcd(nom,den), den / gcd(nom,den));
    }
    return 0;
}
