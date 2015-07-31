#include <cstdio>
#include <algorithm>

int main(){

    long n(0); scanf("%ld", &n);
    long * array = new long[n];

    for(int k = 0; k < n; k++){scanf("%ld", array + k);}
    std::sort(array, array + n);

    long index(n - 1);
    for(long p = n / 2 - 1; p >= 0; p--){
        if(2 * array[p] <= array[index]){--index;}
    }

    delete[] array;

    printf("%ld\n", index + 1);

    return 0;
}
