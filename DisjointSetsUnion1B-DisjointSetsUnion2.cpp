#include <iostream>
#include <vector>

long find(std::vector<long> &f, long x){return (x == f[x]) ? x : (f[x] = find(f, f[x]));}

int main(){
    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> n >> m;
    std::vector<long> f(n + 1), mnv(n + 1), mxv(n + 1), numv(n + 1);
    for(long p = 1; p <= n; p++){f[p] = mnv[p] = mxv[p] = p; numv[p] = 1;}
    while(m--){
        std::string action; long x, y;
        std::cin >> action;
        if(action == "union"){
            long x, y; std::cin >> x >> y;
            long u = find(f, x);
            long v = find(f, y);
            if(v == u){continue;}
            long mn = (mnv[u] < mnv[v]) ? mnv[u] : mnv[v];
            long mx = (mxv[u] > mxv[v]) ? mxv[u] : mxv[v];
            long cnt = numv[u] + numv[v];
            f[u] = v;
            mnv[v] = mn;
            mxv[v] = mx;
            numv[v] = cnt;
        }
        else if(action == "get"){
            long x; std::cin >> x;
            long lead = find(f, x); 
            std::cout << mnv[lead] << " " << mxv[lead] << " " << numv[lead] << std::endl;
        }
    }

    return 0;
}
