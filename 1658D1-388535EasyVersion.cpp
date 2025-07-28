#include <cstdio>
#include <vector>

int main(){

    const int B = 31;
    long t; scanf("%ld", &t);
    while(t--){
        std::vector<std::vector<long> > w(B, std::vector<long>(2, 0));

        long left, right; scanf("%ld %ld", &left, &right);
        for(long p = left; p <= right; p++){
            long x; scanf("%ld", &x);
            for(long b = 0; b < B; b++, x /= 2){++w[b][x % 2];}
        }

        long ans(0);
        for(long p = 0; p < B; p++){ans |= ((1L << p) * (w[p][1] > w[p][0]));}
        printf("%ld\n", ans);
    }

}
