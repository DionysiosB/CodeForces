#include <cstdio>
#include <vector>

int main(){

    int n, t; scanf("%d %d\n", &n, &t);
    std::vector<std::vector<double> > g(n + 1, std::vector<double>(n + 1, 0));
    g[0][0] = t;
    int total(0);
    for(int level = 0; level < n; level++){
        for(int col = 0; col <= level; col++){
            if(g[level][col] < 1.0){continue;}
            ++total;
            double rem = g[level][col] - 1;
            g[level + 1][col] += rem/2;
            g[level + 1][col + 1] += rem/2;
        }
    }

    printf("%d\n", total);

    return 0;
}
