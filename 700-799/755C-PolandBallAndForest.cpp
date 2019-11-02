#include <cstdio>
#include <vector>

long find(std::vector<long> &a, long x){return (x == a[x]) ? x : (a[x] = find(a, a[x]));}
bool check(std::vector<long> &a, long x, long y){return find(a, x) == find(a, y);}
void join(std::vector<long> &a, long x, long y){a[y] = a[find(a, y)] = find(a, x);}

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> parent(n + 1, 0); for(long p = 1; p <= n; p++){parent[p] = p;}
    for(long p = 1; p <= n; p++){long v; scanf("%ld", &v); join(parent, p, v);}
    long count(0);
    for(long p = 1; p <= n; p++){count += (parent[p] == p);}
    printf("%ld\n", count);

    return 0;
}
