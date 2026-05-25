#include <cstdio>
#include <vector>

int main(){

    long nrow, ncol; scanf("%ld %ld", &nrow, &ncol);
    std::vector<std::vector<long> > a(nrow, std::vector<long>(ncol, 0));
    for(long row = 0; row < nrow; row++){for(long col = 0; col < ncol; col++){scanf("%ld", &a[row][col]);}}
    bool possible(true);
    long long sum(0);
    for(long row = nrow - 1; row >= 0 && possible; row--){
        for(long col = ncol - 1; col >= 0 && possible; col--){
            if(a[row][col]){sum += a[row][col]; continue;}
            long x = (a[row + 1][col] < a[row][col + 1] ? a[row + 1][col] : a[row][col + 1]) - 1;
            if(x <= a[row - 1][col] || x <= a[row][col - 1]){possible = false; break;}
            else{a[row][col] = x; sum += x;}
        }
    }

    for(long row = 0; row < nrow && possible; row++){
        for(long col = 0; col < ncol && possible; col++){
            if(row > 0 && a[row][col] <= a[row - 1][col]){possible = false;}
            if(row + 1 < nrow && a[row][col] >= a[row + 1][col]){possible = false;}
            if(col > 0 && a[row][col] <= a[row][col - 1]){possible = false;}
            if(col + 1 < ncol && a[row][col] >= a[row][col + 1]){possible = false;}
        }
    }

    if(possible){printf("%lld\n", sum);}
    else{puts("-1");}

    return 0;
}
