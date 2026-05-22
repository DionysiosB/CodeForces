#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1);
    long maxA(0);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]); if(a[p] > maxA){maxA = a[p];}}

    std::vector<long> greatestDivisor(maxA + 1, 0);
    std::vector<long> sequenceLength(maxA + 1, 0);
    for(long p = 2; p <= maxA; p++){if(greatestDivisor[p] == 0){for(long q = p; q <= maxA; q+= p){greatestDivisor[q] = p;}}}

    long maxSoFar(1);

    for(long p = 0; p < n; p++){
        long current = a[p];
        long count = 0;
        while(current > 1){
            if(count <= sequenceLength[greatestDivisor[current]]){count = 1 + sequenceLength[greatestDivisor[current]];}
            current /= greatestDivisor[current];
        }
        
        if(count > maxSoFar){maxSoFar = count;}

        current = a[p];
        while(current > 1){
            if(sequenceLength[current] < count){sequenceLength[greatestDivisor[current]] = count;}
            current /= greatestDivisor[current];
        }
    }

    printf("%ld\n", maxSoFar);

    return 0;
}
