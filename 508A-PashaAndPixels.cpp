#include <cstdio>
#include <vector>

int main(){

    long n, m, k; scanf("%ld %ld %ld\n", &n, &m, &k);
    std::vector<std::vector<bool> > field(n, std::vector<bool>(m, 0));

    long output(0);
    for(long p = 1; p <= k; p++){
        long row, col; scanf("%ld %ld\n", &row, &col); --row; --col;
        field[row][col] = 1;
        if(row > 0     && col > 0     && field[row - 1][col] && field[row][col - 1] && field[row - 1][col - 1]){output = p; break;}
        if(row > 0     && col < m - 1 && field[row - 1][col] && field[row][col + 1] && field[row - 1][col + 1]){output = p; break;}
        if(row < n - 1 && col > 0     && field[row + 1][col] && field[row][col - 1] && field[row + 1][col - 1]){output = p; break;}
        if(row < n - 1 && col < m - 1 && field[row + 1][col] && field[row][col + 1] && field[row + 1][col + 1]){output = p; break;}
    }

    printf("%ld\n", output);

    return 0;
}
