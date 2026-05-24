#include <cstdio>
#include <vector>

int main(){

    const long N = 1e5 + 20;
    std::vector<long> count(N, 0);
    long n; scanf("%ld", &n);
    while(n--){long a; scanf("%ld", &a); ++count[a];}

    long max = 1;
    for(int p = 2; p <= N; p++){
        long temp(0);
        for(long q = p; q < N; q += p){temp += count[q];}
        max = (max > temp) ? max : temp;
    }

    printf("%ld\n", max);

    return 0;
}
