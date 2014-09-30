#include <cstdio>

int main(){

    long n(0), m(0); scanf("%ld %ld", &n, &m);
    long *debts = new long[n + 1];
    for(int k = 1; k <= n; k++){debts[k] = 0;}
    
    for(int k = 0; k < m; k++){
        long source(0), dest(0), amount(0); scanf("%ld %ld %ld", &source, &dest, &amount);
        debts[source] -= amount; debts[dest] += amount;
    }

    long total(0);
    for(int k = 1; k <= n; k++){if(debts[k] > 0){total += debts[k];}}
    printf("%ld\n", total);

    return 0;
}
