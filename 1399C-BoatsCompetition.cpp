#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> w(n + 1, 0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++w[x];}

        long mx(0);
        for(long sum = 0; sum <= 2 * n; sum++){
            long cnt(0);
            for(long p = 1; p <= n; p++){
                if(p > sum - p){continue;}
                else if(sum - p > n){continue;}
                else if(2 * p == sum){cnt += w[p] / 2;}
                else{cnt += (w[p] < w[sum - p]) ? w[p] : w[sum - p];}
            }

            mx = (mx > cnt) ? mx : cnt;
        }

        printf("%ld\n", mx);
    }

    return 0;
}
