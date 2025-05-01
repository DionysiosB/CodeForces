#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        bool neg = (a + b) % 2;
        bool ltn = (b > 0 || c > 0);
        bool gtn = (a > 0 || d > 0);
        printf((neg && gtn) ? "Ya " : "Tidak ");
        printf((neg && ltn) ? "Ya " : "Tidak ");
        printf((!neg && ltn) ? "Ya " : "Tidak ");
        printf((!neg && gtn) ? "Ya\n" : "Tidak\n");
    }

}
