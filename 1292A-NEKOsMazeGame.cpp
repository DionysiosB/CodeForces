#include <cstdio>
#include <vector>

int main(){

    long n, q; scanf("%ld %ld", &n, &q);
    std::vector<std::vector<bool> > s(2, std::vector<bool>(n, 0));
    long cnt(0);
    while(q--){
        long row, col; scanf("%ld %ld", &row, &col);
        --row; --col;
        if(s[row][col]){
            if(s[1 - row][col]){--cnt;}
            if(col > 0 && s[1 - row][col - 1]){--cnt;}
            if(col + 1 < n && s[1 - row][col + 1]){--cnt;}
        }
        else{
            if(s[1 - row][col]){++cnt;}
            if(col > 0 && s[1 - row][col - 1]){++cnt;}
            if(col + 1 < n && s[1 - row][col + 1]){++cnt;}
        }

        s[row][col] = 1 - s[row][col];
        puts(cnt <= 0 ? "Yes" : "No");
    }

    return 0;
}
