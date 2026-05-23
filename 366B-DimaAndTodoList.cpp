#include <cstdio>

int main(){

    long n(0), k(0); scanf("%ld %ld", &n, &k);

    int *array = new int[n];
    long total(0), currentMin(0), optimalStart(0);
    for(int p = 0; p < n; p++){scanf("%d", array + p); currentMin += array[p];}

    long checkMax(n); if(n % k == 0){checkMax = k;}
    for(long first = 0; first < checkMax; first++){
        total = 0;
        for(long current = first; current < first + n; current += k){total += array[current % n];}
        if(total < currentMin){currentMin = total; optimalStart = first;}
    }

    printf("%ld\n", optimalStart + 1);
    return 0;
}
