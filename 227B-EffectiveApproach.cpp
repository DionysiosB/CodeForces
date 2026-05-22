#include <cstdio>

int main(){

    long n(0); scanf("%ld", &n);
    long *position = new long[n + 1];


    long temp(0);
    for(long k = 1; k <= n; k++){scanf("%ld", &temp); position[temp] = k;}

    long m(0); scanf("%ld", &m);
    long long vasya(0), petya(0);


    while(m--){
        scanf("%ld", &temp);
        vasya += position[temp];
        petya += n + 1 - position[temp];
    }

    printf("%lld %lld\n", vasya, petya);

    return 0;
}
