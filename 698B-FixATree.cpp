#include <cstdio>
#include <vector>

long find(std::vector<long> &f, long x){return (f[x] == x) ? x : (f[x] = find(f, f[x]));}
void join(std::vector<long> &f, long x, long y){f[y] = find(f, x);}

int main(){
    
    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1), f(n + 1);
    for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
    for(long p = 1; p <= n; p++){f[p] = p;}
    long root(0);
    for(long p = 1; p <= n; p++){
        if(a[p] == p){root = p;}
        join(f, a[p], p);
    }

    long count(0);
    if(root <= 0){root = find(f, 1); a[root] = root; ++count;} //Use the root of the first one as the global root
    for(long p = 1; p <= n; p++){
        if(find(f, p) != p || p == root){continue;}
        ++count; a[p] = root;
    }

    printf("%ld\n", count);
    for(long p = 1; p <= n; p++){printf("%ld ", a[p]);}
    puts("");

    return 0;
}
