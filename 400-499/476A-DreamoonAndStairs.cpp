#include <cstdio>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);

    int minSteps = n / 2 + n % 2;

    if(n < m){puts("-1");}
    else{printf("%ld\n", m * ((minSteps / m) + (minSteps % m > 0))  );}

    return 0;
}
