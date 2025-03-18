#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;

        std::vector<std::string> mat(n);
        for(long row = 0; row < n; row++){std::cin >> mat[row];}

        long rowcnt(0);
        for(long row = 0; row < n; row++){
            long cnt(0);
            for(long col = 0; col < m; col++){cnt += (mat[row][col] - '0');}
            rowcnt += (cnt % 2);
        }

        long colcnt(0);
        for(long col = 0; col < m; col++){
            long cnt(0);
            for(long row = 0; row < n; row++){cnt += (mat[row][col] - '0');}
            colcnt += (cnt % 2);
        }

        printf("%ld\n", (rowcnt > colcnt ? rowcnt : colcnt));
    }

}
