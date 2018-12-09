#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long up, down; scanf("%ld\n%ld", &up, &down);
    long N = up + down + 1;
    std::vector<long> height(N);
    for(int p = 0; p < N; p++){height[p] = p + 1;}
    std::reverse(height.begin() + up, height.end());

    for(int p = 0; p < N; p++){printf("%ld ", height[p]);}
    puts("");

    return 0;
}
