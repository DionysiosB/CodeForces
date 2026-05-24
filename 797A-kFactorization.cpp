#include <cstdio>
#include <vector>

int main(){

    long n; int k; scanf("%ld %d", &n, &k);
    std::vector<long> factors;
    long div(2);
    while(n > 1){
        if(n % div == 0){factors.push_back(div); n /= div;}
        else{++div;}
    }

    if(factors.size() < k){puts("-1");}
    else{
        for(int p = 0; p < k - 1; p++){printf("%ld ", factors[p]);}
        long lastFactor(1);
        for(long p = k - 1; p < factors.size(); p++){lastFactor *= factors[p];}
        printf("%ld\n", lastFactor);
    }

    return 0;
}
