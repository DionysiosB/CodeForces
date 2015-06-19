#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<std::vector<long> > grid(n + 1, std::vector<long>(n + 1,0));

    long count(0); bool done(0);
    while(count < m && !done){
        ++count;
        long x, y; scanf("%ld %ld\n", &x, &y);
        for(long a = x; a < x + 3 && a <= n; a++){
            for(long b = y; b < y + 3 && b <= n; b++){
                ++grid[a][b];
                if(grid[a][b] == 9){done = 1; break;}
            }
        }
    }

    if(done){printf("%ld\n", count);}
    else{puts("-1");}

    return 0;
}
