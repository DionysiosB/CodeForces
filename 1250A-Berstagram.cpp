#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> which(n + 1), where(n + 1), top(n + 1), bottom(n + 1);
    for(long p = 1; p <= n; p++){top[p] = bottom[p] = which[p] = where[p] = p;}
    for(long p = 0; p < m; p++){
        long x; scanf("%ld", &x);
        long pos = where[x];
        if(pos <= 1){continue;}
        long y = which[pos - 1];
        where[x] = pos - 1; which[pos - 1] = x;
        where[y] = pos; which[pos] = y;
        top[x] = (top[x] < where[x]) ? top[x] : where[x];
        bottom[y] = (bottom[y] > where[y]) ? bottom[y] : where[y];
    }

    for(long p = 1; p <= n; p++){printf("%ld %ld\n", top[p], bottom[p]);}

    return 0;
}
