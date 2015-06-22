#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long long> numbers(n,0);
    long long total(0), leftSum(0), ways(0);

    for(long k = 0; k < n; k++){scanf("%lld ", &numbers[k]); total += numbers[k];}
    for(long k = 0; k < n - 1; k++){leftSum += numbers[k]; if(2 * leftSum == total){++ways;}}

    printf("%lld\n", ways);

    return 0;
}
