#include <cstdio>


int main(){

    long n(0), k(0); scanf("%ld %ld", &n, &k);
    long *accumulator = new long[n];
    long temp(0), previous(0);

    for(int m = 0; m < n; m++){scanf("%ld", &temp); accumulator[m] = previous + temp; previous = accumulator[m];}

    long currentMin = accumulator[k - 1];
    long bestIndex(0);
    for(long index = 0; index < n - k; index++){
        temp = accumulator[index + k] - accumulator[index];
        if(temp < currentMin){currentMin = temp; bestIndex = index + 1;}
    }

    printf("%ld\n", bestIndex + 1);
    return 0;
}
