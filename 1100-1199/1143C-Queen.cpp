#include <cstdio>
#include <vector>
#include <set>

void dfs(long node, const std::vector<std::vector<long> > &g, const std::vector<int> &c, std::set<long> &del){

    bool toremove = c[node];
    for(long p = 0; p < g[node].size(); p++){
        long r = g[node][p];
        if(!c[r]){toremove = false;}
        dfs(r, g, c, del);
    }

    if(toremove){del.insert(node);}
}

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > g(n + 1);
    std::vector<int> c(n + 1);
    long root(0);
    for(long p = 1; p <= n; p++){
        long parent;
        scanf("%ld %d", &parent, &c[p]);
        if(parent < 0){root = p;}
        else{g[parent].push_back(p);}
    }

    std::set<long> rem;
    dfs(root, g, c, rem);

    if(rem.size()){for(std::set<long>::iterator it = rem.begin(); it != rem.end(); it++){printf("%ld ", *it);}; puts("");}
    else{puts("-1");}

    return 0;
}
