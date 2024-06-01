#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::vector<long> > v(2, std::vector<long>(n, 0));
        v[0][0] = 2 * n - 1; v[1][n - 1] = 2 * n;
        for(long p = 1; p < n; p++){
            if(p % 2){v[0][p] = p + 1; v[1][p - 1] = p;}
            else{v[0][p] = n + p; v[1][p - 1] = n + p - 1;}
        }

        for(long row = 0; row < 2; row++){
            for(long col = 0; col < n; col++){printf("%ld ", v[row][col]);}
            puts("");
        }
    }

}
