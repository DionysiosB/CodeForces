#include <iostream>
#include <vector>

long find(std::vector<long> &f, long x){return (x == f[x]) ? x : (f[x] = find(f, f[x]));}
void merge(std::vector<long> &f, long x, long y){
    long u = find(f, x);
    long v = find(f, y);
    f[u] = v;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> n >> m;
    std::vector<long> f(n + 1); for(long p = 1; p <= n; p++){f[p] = p;}
    while(m--){
        std::string action; long x, y;
        std::cin >> action >> x >> y;
        if(action == "union"){merge(f, x, y);}
        else if(action == "get"){
            long u = find(f, x); 
            long v = find(f, y); 
            std::cout << (u == v ? "YES" : "NO") << std::endl;
        }
    }

    return 0;
}
