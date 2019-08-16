#include <cstdio>
#include <vector>

int main(){

    long n, m, q; scanf("%ld %ld %ld\n", &n, &m, &q);

    std::vector<std::vector<long> > op(q, std::vector<long>(4, 0));
    for(long p = 0; p < q; p++){
        long x; scanf("%ld ", &x);
        op[p][0] = x;
        if(x < 3){
            long y; scanf("%ld\n", &y);
            op[p][1] = y - 1;
        }
        else{
            long y, z, w; scanf("%ld %ld %ld\n", &y, &z, &w);
            op[p][1] = y - 1; op[p][2] = z - 1; op[p][3] = w;
        }
    }
    

    std::vector<std::vector<long> > data(n, std::vector<long>(m, 0));
    for(long p = q - 1; p >= 0; p--){
        std::vector<long> exp = op[p];

        if(exp[0] == 1){
            long row = exp[1];
            long temp = data[row][m - 1];
            for(int col = m - 1; col > 0; col--){data[row][col] = data[row][col - 1];}
            data[row][0] = temp;
        }
        else if(exp[0] == 2){
            long col = exp[1];
            long temp = data[n - 1][col];
            for(int row = n - 1; row > 0; row--){data[row][col] = data[row - 1][col];}
            data[0][col] = temp;
        }
        else if(exp[0] == 3){
            long row(exp[1]), col(exp[2]), value(exp[3]);
            data[row][col] = value;
        }
    }

    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){
            printf("%ld ", data[row][col]);
        }
        puts("");
    }

    return 0;
}
