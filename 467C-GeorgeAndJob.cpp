#include <cstdio>
#include <vector>

int main(){

    long n, m, k; scanf("%ld %ld %ld\n", &n, &m, &k);
    std::vector<long long> array(n);

    long long cumsum(0);
    for(long p = 0; p < n; p++){long temp; scanf("%ld", &temp); cumsum += temp; array[p] = cumsum;}

    std::vector<std::vector<long long> > matrix(n, std::vector<long long>(k, 0));

    for(long col = 0; col < k; col++){matrix[m - 1][col] = array[m - 1];}
    for(long row = m; row < n; row++){
        for(long col = 0; col < k; col++){
            matrix[row][col] = matrix[row - 1][col];
            long long candidate = (col > 0 ? matrix[row - m][col - 1] : 0) + (array[row] - array[row - m]);
            if(candidate > matrix[row][col]){matrix[row][col] = candidate;}
        }
    }

    printf("%lld\n", matrix[n - 1][k - 1]);

    return 0;
}
