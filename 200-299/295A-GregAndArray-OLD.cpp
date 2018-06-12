#include <cstdio>
#include <vector>

int main(){

    long long n(0), m(0), k(0); scanf("%lld %lld %lld\n", &n, &m, &k);

    std::vector<long long> data(n + 1,0);
    for(long long p = 1; p <= n; p++){scanf("%lld ", &data[p]);}
    scanf("\n");

    std::vector<std::vector<long long> > ops(m + 1, std::vector<long long>(3,0));
    for(long long p = 1; p <= m; p++){scanf("%lld %lld %lld\n", &ops[p][0], &ops[p][1], &ops[p][2]);}

    std::vector<long long> offset(n + 1,0);
    while(k--){
        long long firstOp(0), lastOp(0); scanf("%lld %lld\n", &firstOp, &lastOp);
        for(long long p = firstOp; p <= lastOp; p++){
            long long start = ops[p][0]; long long finish = ops[p][1]; long long bias = ops[p][2];
            offset[start] += bias; if(finish < n){offset[finish + 1] -= bias;}
        }

    }
    long long biasSum = 0;
    for(int p = 1; p <= n; p++){biasSum += offset[p]; printf("%lld ", biasSum + data[p]);}
    puts("");

    return 0;
}
