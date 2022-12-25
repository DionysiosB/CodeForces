#include <cstdio>
#include <vector>

int main(){

    const long N = 100007;
    std::vector<long> number(N, 0);
    std::vector<long> actions(N, 0);

    long n; scanf("%ld", &n);
    for(long p = 0; p < n; p++){
        long a; scanf("%ld", &a);
        long count(0);
        while(a){
            ++number[a];
            actions[a] += count;
            a /= 2;
            ++count;
        }
    }

    long target(N);
    for(long p = N - 1; p >= 0; p--){if(number[p] == n){target = p; break;}}

    long total = actions[target];
    target *= 2; while((target < N) && (2 * number[target] >= n)){total -= (2 * number[target] - n); target *= 2;}
    printf("%ld\n", total);

    return 0;
}
