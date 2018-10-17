#include <cstdio>

int main(){
    
    const int F = 25;
    long k; scanf("%ld", &k);
    long maxRank(0);
    for(long p = 0; p < k; p++){long x; scanf("%ld", &x); maxRank = (maxRank > x) ? maxRank : x;}
    printf("%ld\n", (maxRank > F) ? (maxRank - F) : 0);
    
    return 0;
}
