#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    const int N = 5;

    std::vector<int> x(N); for(int p = 0; p < N; p++){x[p] = (p + 1) * 500;}
    std::vector<int> m(N); for(int p = 0; p < N; p++){scanf("%d", &m[p]);}
    std::vector<int> w(N); for(int p = 0; p < N; p++){scanf("%d", &w[p]);}

    int hs, hu; scanf("%d %d\n", &hs, &hu);

    double score(0.0);
    for(int p = 0; p < N; p++){score += std::max(0.3 * x[p] , (1 - m[p] / 250.0)* x[p] - 50 * w[p]);}

    score += 100 * hs - 50 * hu;
    printf("%.0lf\n", score);

    return 0;
}
