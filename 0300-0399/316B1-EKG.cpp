#include <cstdio>
#include <vector>


int main(){

    const long N = 1010;
    long n, x; scanf("%ld %ld", &n, &x);
    std::vector<long> g(n + 1, -1);
    std::vector<long> start;
    for(long p = 1; p <= n; p++){
        long a; scanf("%ld", &a);
        if(a == 0){start.push_back(p);}
        else{g[a] = p;}
    }

    std::vector<long> sizes;
    long targetOrder(0);
    for(long p = 0; p < start.size(); p++){
        long node = start[p];
        long target = (node == x) ? 1 : 0;
        long count(1);
        while(g[node] > 0){
            node = g[node];
            ++count;
            if(node == x){target = count;}
        }

        if(target == 0){sizes.push_back(count);}
        else{targetOrder = target;}
    }

    std::vector<bool> possible(N, 0);
    possible[targetOrder] = 1;
    for(long p = 0; p < sizes.size(); p++){
        long current = sizes[p];
        for(long q = N; q >= current; q--){possible[q] = possible[q] | possible[q - current];}
    }


    for(long p = 0; p <= N; p++){if(possible[p]){printf("%ld\n", p);}}

    return 0;
}
