#include <cstdio>

int main(){

    long n(0), m(0), x(0), y(0), z(0), p(0);
    scanf("%ld %ld %ld %ld %ld %ld", &n, &m, &x, &y, &z, &p);

    x %= 4; y %= 2; z %= 4; 

    while(p--){
        long a(0), b(0); scanf("%ld %ld", &a, &b);

        long c(a), d(b);  //Auxiliary coordinates;
        long N(n), M(m);  //Auxiliary coordinates;
        long f(n), g(m);  //Auxiliary coordinates;

        if(x == 1){c = b; d = N + 1 - a; f = M; g = N;}
        else if(x == 2){c = N + 1 - a; d = M + 1 - b;}
        else if(x == 3){c = M + 1 - b; d = a; f = M; g = N;}
        a = c; b = d; N = f; M = g;

        if(y == 1){d = M + 1 - b;}
        b = d;

        if(z == 1){c = M + 1 - b; d = a;}
        else if(z == 2){c = N + 1 - a; d = M + 1 - b;}
        else if(z == 3){c = b; d = N + 1 - a;}
        a = c; b = d; 

        printf("%ld %ld\n", a, b);
    }

    return 0;
}
