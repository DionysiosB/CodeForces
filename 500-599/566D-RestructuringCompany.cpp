#include <cstdio>
#include <vector>

long find(std::vector<long> &a, long x){return (x == a[x]) ? x : (a[x] = find(a, a[x]));}
bool check(std::vector<long> &a, long x, long y){return find(a, x) == find(a, y);}
void join(std::vector<long> &a, long x, long y){a[y] = a[find(a, y)] = find(a, x);}

int main(){

    long n, q; scanf("%ld %ld", &n, &q);
    std::vector<long> parent(n + 1);
    std::vector<long> r(n + 2);
    for(long p = 1; p <= n; p++){parent[p] = p; r[p] = p + 1;}

    while(q--){
        int t; long x, y; scanf("%d %ld %ld\n", &t, &x, &y);
        if(t == 1){join(parent, x, y);}
        else if(t == 2){
            while(x < y){
                join(parent, x, y);
                long t = r[x]; r[x] = r[y]; x = t;
            }
        }
            
        else if(t == 3){puts(check(parent, x, y) ? "YES" : "NO");}
    }

    return 0;
}
