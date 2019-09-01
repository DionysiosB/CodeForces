#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > a(n, std::vector<long>(m, 0)), b(n, std::vector<long>(m, 0));
    for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){scanf("%ld", &a[row][col]);}}
    for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){scanf("%ld", &b[row][col]);}}
    for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){long x(a[row][col]), y(b[row][col]); a[row][col] = (x < y) ? x : y; b[row][col] = (x > y) ? x : y;}}
    bool possible(true);
    for(long row = 0; row < n; row++){for(long col = 0; col < m; col++){
        if((row > 0 && a[row][col] <= a[row - 1][col]) || (col > 0 && a[row][col] <= a[row][col - 1])){possible = false;}
        if((row > 0 && b[row][col] <= b[row - 1][col]) || (col > 0 && b[row][col] <= b[row][col - 1])){possible = false;}
    }}
    puts(possible ? "Possible" : "Impossible");

    return 0;
}
