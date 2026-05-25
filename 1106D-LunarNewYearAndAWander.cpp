#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    std::set<long> todo; todo.insert(1);
    std::set<long> done;
    std::vector<long> w;

    while(todo.size()){
        long cur = *todo.begin();
        w.push_back(cur); done.insert(cur), todo.erase(cur);
        for(long p = 0; p < g[cur].size(); p++){
            long node = g[cur][p];
            if(done.find(node) == done.end()){todo.insert(node);}
        }
    }

    for(long p = 0; p < w.size(); p++){printf("%ld ", w[p]);}
    puts("");

    return 0;
}
