#include <cstdio>

int main(){


    long n(0); scanf("%ld", &n);
    long *array = new long[n];
    for(int k = 0; k < n; k++){scanf("%ld", array + k);}

    long long total(0);
    for(int k = n - 1; k > 0; k--){if(array[k - 1] > array[k]){total += array[k - 1] - array[k];}}
    printf("%lld\n", total);

    delete[] array;
    return 0;
}
