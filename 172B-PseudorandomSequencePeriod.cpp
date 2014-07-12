#include <cstdio>

int main(){

    long a(0), b(0), m(0), r(0); scanf("%ld %ld %ld %ld", &a, &b, &m, &r);
    long * array = new long[m];for(long k = 0; k < m; k++){array[k] = 0;}

    array[r] = 1;

    long period(0), step(1);
    while(++step <= 2 * m){
        r = (a * r + b) % m;
        if(array[r] > 0){period = step - array[r]; break;}
        array[r] = step;
    }

    printf("%ld\n", period);

    return 0;
}
