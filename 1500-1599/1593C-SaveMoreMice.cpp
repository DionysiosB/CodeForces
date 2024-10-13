#include <cstdio>
#include <vector>
#include <algorithm>


//One of the best problems
//we need rem strictly greater than zero to account for the cat being in that position, even if we have enough time to save the mouse
//Look at the second test case in the example

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> dist(k);
        for(long p = 0; p < k; p++){
            long x; scanf("%ld", &x);
            dist[p] = n - x;
        }

        sort(dist.begin(), dist.end());

        long cnt(0), rem(n);
        for(long p = 0; (rem > 0) && (p < dist.size()); p++){
            rem -= dist[p];
            cnt += (rem > 0);
        }

        printf("%ld\n", cnt);

    }

}
