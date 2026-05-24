#include <cstdio>
#include <vector>

long dfs(long node, long target, const std::vector<std::vector<long> > &h, const std::vector<long> &t, std::vector<long> &cuts){

    if(cuts.size() >= 2){return 0;}

    long subsum = t[node];
    for(long p = 0; p < h[node].size(); p++){
        long u = h[node][p];
        subsum += dfs(u, target, h, t, cuts);
    }
    
    if(cuts.size() >= 2){return 0;}
    else if(subsum == target){cuts.push_back(node); return 0;}

    return subsum;
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<long> t(n);
    std::vector<std::vector<long> > h(n);
    long root(-1), tsum(0);
    for(long p = 0; p < n; p++){
        long par, temp; scanf("%ld %ld", &par, &temp);
        t[p] = temp; tsum += temp;
        if(par == 0){root = p;}
        else{h[par - 1].push_back(p);}
    }

    if((tsum % 3) != 0){puts("-1");}
    else{
        std::vector<long> cuts;
        dfs(root, tsum / 3, h, t, cuts);
        if(cuts.size() >= 2 && cuts[0] != root && cuts[1] != root){printf("%ld %ld\n", 1 + cuts[0], 1 + cuts[1]);}
        else{puts("-1");}
    }

    return 0;
}
