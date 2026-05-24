#include <iostream>
#include <vector>
#include <map>

long find(std::vector<long> &f, long x){return (x == f[x]) ? x : (f[x] = find(f, f[x]));}

int main(){


    std::ios_base::sync_with_stdio(false);
    long n, m, q; std::cin >> n >> m >> q;

    std::map<std::string, long> wm;
    for(long p = 1; p <= n; p++){std::string x; std::cin >> x; wm[x] = p;}

    std::vector<long> f(n + 1); for(long p = 0; p <= n; p++){f[p] = p;}
    std::vector<long> g(n + 1, 0);

    while(m--){
        long rel; std::string wf, ws; std::cin >> rel >> wf >> ws;
        long na = wm[wf], nb = wm[ws];
        long a = find(f, na), b = find(f, nb);
        long c = find(f, g[a]), d = find(f, g[b]);

        if(a == b){std::cout << ((rel == 1) ? "YES" : "NO") << std::endl; continue;}
        if((c > 0 && d > 0) && (a == c || a == d || b == c || b == d || c == d)){std::cout << "NO" << std::endl; continue;}

        if(rel == 1){
            f[b] = a;
            if(c > 0 && d > 0){f[d] = c;}
            else if(d > 0){g[a] = d; g[d] = a;}
        }
        else{
            g[a] = b; g[b] = a;
            if(c > 0){f[c] = b;}
            if(d > 0){f[d] = a;}
        }

        std::cout << "YES" << std::endl;
    }

    while(q--){
        std::string wf, ws; std::cin >> wf >> ws;
        long na = wm[wf], nb = wm[ws];
        long a = find(f, na), b = find(f, nb);
        if(a == b){std::cout << "1" << std::endl;}
        else if(g[a] == b || g[b] == a){std::cout << "2" << std::endl;}
        else{std::cout << "3" << std::endl;}
    }

    return 0;
}
