#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> order(n + 1, 0);
    long maxInOrder(0);
    for(long p = 1; p <= n; p++){
        long x; scanf("%ld", &x); 
        order[x] = order[x - 1] + 1;
        if(order[x] > maxInOrder){maxInOrder = order[x];}
    }

    printf("%ld\n", n - maxInOrder);

    return 0;
}
