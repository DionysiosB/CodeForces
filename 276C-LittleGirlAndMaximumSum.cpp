#include <cstdio>
#include <algorithm>

int main(){

    long n(0), q(0); scanf("%ld %ld", &n, &q);
    long long *array = new long long[n + 1]; array[0] = 0;
    long long *times = new long long[n + 1]; times[0] = 0;

    for(long k = 1; k <= n; k++){scanf("%lld", array + k); times[k] = 0;}

    long left(0), right(0);
    for(long k = 0; k < q; k++){
        scanf("%ld %ld", &left, &right); 
        ++times[left];
        if(right < n){--times[right + 1];}
    }
    for(long k = 2; k <= n; k++){times[k] += times[k - 1];}

    std::sort(array, array + n + 1); std::sort(times, times + n + 1);
    long long total(0); for(long k = 1; k <= n; k++){total += times[k] * array[k];}

    printf("%lld\n", total);
    return 0;
}
