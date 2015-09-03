#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n, m, k; scanf("%ld %ld %ld\n", &n, &m, &k);

    std::vector<std::vector<char> > matrix(n, std::vector<char>(m, ' '));

    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){scanf("%c", &matrix[row][col]);}
        scanf("\n");
    }


    for(long col = 0; col < m; col++){
        long total(0);
        for(long row = 1; row < n; row++){
            if(row <= col && matrix[row][col - row] == 'R'){++total;}
            if((row + col) < m && matrix[row][col + row] == 'L'){++total;}
            if(row % 2 == 0 && matrix[row][col] == 'U'){++total;}
        }

        printf("%ld ", total);
    }
    puts("");

    return 0;
}
