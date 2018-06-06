#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    bool cancel(false);
    while(m--){
        std::vector<std::vector<bool> > a(2, std::vector<bool>(n + 1, 0));
        long u; scanf("%ld", &u);
        while(u--){
            long x; scanf("%ld", &x);
            long row = (x > 0);
            long col = (x > 0) ? x : (-x);
            a[row][col] = 1;
        }

        bool both(false);
        for(long p = 1; p <= n; p++){both |= (a[0][p] & a[1][p]); if(both){break;}}
        if(!both){cancel = true; break;}
    }

    puts(cancel ? "YES" : "NO");

    return 0;
}
