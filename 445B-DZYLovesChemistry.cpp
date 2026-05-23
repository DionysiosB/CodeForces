#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<long> minConnected(n + 1, 0);
    for(long p = 1; p <= n; p++){minConnected[p] = p;}

    long long output = 1;
    while(m--){
        long a, b; scanf("%ld %ld\n", &a, &b);
        while(minConnected[a] != a || b != minConnected[b]){a = minConnected[a]; b = minConnected[b];}
        if(a != b){output *= 2;}
        minConnected[a] = minConnected[b] = (a < b)? a : b;
    }

    printf("%lld\n", output);


    return 0;
}
