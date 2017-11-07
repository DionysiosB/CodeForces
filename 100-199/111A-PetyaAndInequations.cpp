#include <cstdio>
#include <vector>

int main(){

    long long n, x, y; scanf("%lld %lld %lld", &n, &x, &y);

    bool possible = 1;
    std::vector<long long> numbers(n, 1);
    numbers[n - 1] = y - (n - 1);
    if(numbers[n - 1] <= 0){possible = 0;}

    long long sumOfSquares = 0;
    for(int p = 0; p < n; p++){sumOfSquares += numbers[p] * numbers[p];}
    if(sumOfSquares < x){possible = 0;}

    if(possible){for(int p = 0; p < n; p++){printf("%lld ", numbers[p]);}; puts("");}
    else{puts("-1");}

    return 0;
}
