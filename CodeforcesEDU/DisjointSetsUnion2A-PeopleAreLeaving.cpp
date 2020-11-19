#include <cstdio>
#include <vector>

long find(std::vector<long> &f, long x){return (x == f[x]) ? x : (f[x] = find(f, f[x]));}

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<long> L(n + 2, 0); for(long p = 1; p <= n; p++){L[p] = p;}

    while(m--){
        char c; long x; scanf("%c %ld\n", &c, &x);
        if(c == '?'){
            x = find(L, x);
            printf("%ld\n", (x ? x : -1));
        }
        else if(c == '-'){L[x] = find(L, x + 1);}
    }

    return 0;
}
