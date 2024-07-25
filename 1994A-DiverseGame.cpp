#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<std::vector<long> > a(n, std::vector<long>(m, 0));
        for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){scanf("%ld", &a[row][col]);}}

        for(long col = 0; col + 1 < m; col++){
            long tmp = a[0][col];
            a[0][col] = a[0][col + 1];
            a[0][col + 1] = tmp;
        }

        for(long row = 0; row + 1 < n; row++){
            std::vector<long> tmp = a[row];
            a[row] = a[row + 1];
            a[row + 1] = tmp;
        }

        if(n * m == 1){puts("-1"); continue;}

        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){printf("%ld ", a[row][col]);}
            puts("");
        }
    }

}
