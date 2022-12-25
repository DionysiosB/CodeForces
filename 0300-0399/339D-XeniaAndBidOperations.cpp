#include <cstdio>
#include <vector>
#include <map>


int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);

    std::map<long, std::vector<long> > tree;
    for(long p = 0; p <= n; p++){
        std::vector<long> temp(1L << p , 0);
        tree.insert(std::pair<long, std::vector<long> >(n - p, temp));
    }

    for(long p = 0; p < tree[0].size(); p++){scanf("%ld", &tree[0][p]);}

    for(long d = 1; d <= n; d++){
        for(long p = 0; p < tree[d].size() ; p++){
            if(d % 2){tree[d][p] = tree[d - 1][2 * p] | tree[d - 1][2 * p + 1];}
            else{tree[d][p] = tree[d - 1][2 * p] ^ tree[d - 1][2 * p + 1];}
        }
    }

    while(m--){
        long p, b; scanf("%ld %ld\n", &p, &b);
        tree[0][p - 1] = b;
        long node = (p - 1);
        for(long d = 1; d <= n; d++){
            node /= 2;
            if(d % 2){tree[d][node] = tree[d - 1][2 * node] | tree[d - 1][2 * node + 1];}
            else{tree[d][node] = tree[d - 1][2 * node] ^ tree[d - 1][2 * node + 1];}
        }

        printf("%ld\n", tree[n][0]);
    }

    return 0;
}
