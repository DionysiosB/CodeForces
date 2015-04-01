#include <cstdio>
#include <vector>

int main(){

    long m(0), n(0); scanf("%ld %ld", &m , &n);
    std::vector<long> start(n,0);

    while(m--){
        long timeReady(0);
        for(int p = 0; p < n; p++){
            long timeNeeded(0); scanf("%ld", &timeNeeded);
            timeReady = timeReady < start[p] ? start[p] : timeReady; 
            timeReady += timeNeeded;
            if(p > 0){start[p] = start[p - 1] < start[p] ? start[p] : start[p - 1];}
            start[p] += timeNeeded;
        }

        printf("%ld\n", timeReady);
    }

    return 0;
}
