#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<std::vector<long> > v(n, std::vector<long>(m, 0));
        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                scanf("%ld", &v[row][col]);
            }
        }

        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                bool largest(true); long mx(0);
                if(row > 0 && v[row - 1][col] >= v[row][col]){largest = false;}
                else if(row > 0){mx = (mx > v[row - 1][col] ? mx : v[row - 1][col]);}
                if(row + 1 < n && v[row + 1][col] >= v[row][col]){largest = false;}
                else if(row + 1 < n){mx = (mx > v[row + 1][col] ? mx : v[row + 1][col]);}
                if(col > 0 && v[row][col - 1] >= v[row][col]){largest = false;}
                else if(col > 0){mx = (mx > v[row][col - 1] ? mx : v[row][col - 1]);}
                if(col + 1 < m && v[row][col + 1] >= v[row][col]){largest = false;}
                else if(col + 1 < m){mx = (mx > v[row][col + 1] ? mx : v[row][col + 1]);}

                if(largest){v[row][col] = mx;}
                printf("%ld ", v[row][col]);
            }
            puts("");
        }

    }

}
