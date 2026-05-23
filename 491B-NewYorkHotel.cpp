#include <cstdio>
#include <algorithm>

int main(){

    long N, M; scanf("%ld %ld", &N, &M);
    long C; scanf("%ld", &C);

    long minSum(M + N), maxSum(0), minDiff(N), maxDiff(-M);

    for(long p = 0; p < C; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        if(x + y < minSum){minSum = x + y;}
        if(x + y > maxSum){maxSum = x + y;}
        if(x - y < minDiff){minDiff = x - y;}
        if(x - y > maxDiff){maxDiff = x - y;}
    }

    long H; scanf("%ld", &H);

    long bestHotel(0), bestDist(M + N);
    for(long p = 0; p < H; p++){
        long x, y; scanf("%ld %ld\n", &x, &y);
        long sum = x + y; long diff = x - y;
        if(sum - minSum < bestDist && maxSum - sum < bestDist && diff - minDiff < bestDist && maxDiff - diff < bestDist){
            bestHotel = p + 1;
            bestDist = std::max(std::max(sum - minSum, maxSum - sum), std::max(diff - minDiff, maxDiff - diff));
        }
    }

    printf("%ld\n%ld\n", bestDist, bestHotel);


    return 0;
}
