#include <cstdio>
#include <vector>

long find(std::vector<long> &f, long x){return (x == f[x]) ? x : (f[x] = find(f, f[x]));}

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> nxt(n); for(long p = 0; p < n; p++){nxt[p] = p;}
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x); --x;
        x = find(nxt, x);
        printf("%ld ", x + 1);
        nxt[x] = find(nxt, nxt[(x + 1) % n]);
    }
    puts("");

    return 0;
}
