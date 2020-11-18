#include <cstdio>
#include <vector>

std::pair<long, long> get(std::vector<long> &b, std::vector<long> &d, long x){
    if(b[x] == x){return std::make_pair(x, 0);}
    std::pair<long, long> z = get(b, d, b[x]);
    b[x] = z.first; 
    long cur = z.second + 1;
    d[x] = (d[x] > cur) ? d[x] : cur;
    return std::make_pair(b[x], d[x]);
}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);

    std::vector<long> b(n + 1), d(n + 1);
    for(long p = 1; p <= n; p++){b[p] = p; d[p] = 0;}

    while(m--){
        int q; scanf("%d", &q);
        if(q == 1){
            long x, y; scanf("%ld %ld", &x, &y);
            std::pair<long, long> u = get(b, d, x);
            std::pair<long, long> v = get(b, d, y);
            b[u.first] = v.first;
            d[u.second] = d[v.second] + 1;
        }
        else if(q == 2){
            long x; scanf("%ld", &x);
            std::pair<long, long> u = get(b, d, x);
            printf("%ld\n", u.second);
        }
    }

    return 0;
}
