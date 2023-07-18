#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> last(k + 1, 0);
        std::vector<long> first(k + 1, 0);
        std::vector<long> second(k + 1, 0);

        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            long dist = p - last[x] - 1;
            last[x] = p;
            if(dist >= first[x]){second[x] = first[x]; first[x] = dist;}
            else if(dist >= second[x]){second[x] = dist;}
        }


        for(long p = 1; p <= k; p++){
            long dist = n - last[p];
            if(dist >= first[p]){second[p] = first[p]; first[p] = dist;}
            else if(dist >= second[p]){second[p] = dist;}
        }

        long ans(n);
        for(long p = 1; p <= k; p++){
            long cur = second[p];
            if(cur <= first[p] / 2){cur = first[p] / 2;}
            ans = (ans < cur) ? ans : cur;
        }

        printf("%ld\n", ans);
    }

}
