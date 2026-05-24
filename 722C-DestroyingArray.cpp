#include <cstdio>
#include <iostream>
#include <vector>

int64_t find(int64_t x, std::vector<int64_t> &head){return (head[x] == x) ? x : (head[x] = find(head[x], head));}


int main(){

    int64_t n; scanf("%lld", &n);
    std::vector<int64_t> a(n); for(int64_t p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<int64_t> add(n); for(int64_t p = 0; p < n; p++){scanf("%lld", &add[p]); --add[p];}
    std::vector<int64_t> head(n); for(int64_t p = 0; p < n; p++){head[p] = p;}
    std::vector<int64_t> sz(n); for(int64_t p = 0; p < n; p++){sz[p] = a[p];}
    std::vector<bool> present(n, 0);
    std::vector<int64_t> cm(n, 0);

    int64_t m(0);
    for(int64_t p = n - 1; p >= 0; p--){
        int64_t u = add[p];
        present[u] = 1;
        int64_t r = find(u, head);
        if(u > 0 && present[u - 1]){int64_t s = find(u - 1, head); head[s] = r; sz[r] += sz[s];}
        if(u < n - 1 && present[u + 1]){int64_t s = find(u + 1, head); head[s] = r; sz[r] += sz[s];}
        m = (m > sz[r]) ? m : sz[r];
        cm[p] = m;
    }

    for(int64_t p = 1; p < n; p++){printf("%lld\n", cm[p]);} puts("0");

    return 0;
}
