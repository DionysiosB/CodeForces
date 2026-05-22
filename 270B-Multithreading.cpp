#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long *array = new long[n];
    for(int k = 0; k < n; k++){scanf("%ld", array + k);}
    long updated(0);
    for(long k = n - 1; k >= 1; k--){if(array[k - 1] > array[k]){updated = k; break;}}
    printf("%ld\n", updated);
    return 0;
}
