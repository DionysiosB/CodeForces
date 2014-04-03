#include <cstdio>

int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    int n(0); scanf("%d\n", &n);
    long currentGcd(0); long currentMax(0);

    for(size_t k = 0; k < n; k++){
        long temp(0); scanf("%ld", &temp);
        currentGcd = gcd(currentGcd, temp);
        if(temp > currentMax){currentMax = temp;}
    }

    if((currentMax / currentGcd - n) % 2){puts("Alice");}
    else{puts("Bob");}
    return 0;
}
