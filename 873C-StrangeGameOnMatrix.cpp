#include <cstdio>
#include <vector>

int main(){

    long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
    std::vector<std::vector<int> > a(n, std::vector<int>(m, 0));

    for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){scanf("%d", &a[row][col]);}}

    long total(0), count(0);
    for(long col = 0; col < m; col++){
        std::vector<long> b(n, 0); b[0] = a[0][col];
        for(long row = 1; row < n; row++){b[row] = b[row - 1] + a[row][col];}
        long maxSum(0), chg(0);
        for(long row = 0; row < n; row++){
            if(a[row][col] == 0){continue;}
            long s = (row > 0) ? b[row - 1] : 0;
            long f = (row + k - 1 <= n - 1) ? b[row + k - 1] : b[n - 1];
            long sum = f - s;
            if(sum > maxSum){
                chg = s;
                maxSum = sum;
            }
        }

        total += maxSum;
        count += chg;
    }

    printf("%ld %ld\n", total, count); 

    return 0;
}
