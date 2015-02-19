#include <cstdio>
#include <vector>

int main(){

    int n(0), m(0); scanf("%d %d", &n, &m);
    std::vector<long> good(n, 0);
    std::vector<long> prep(m, 0);

    for(int k = 0; k < n; k++){scanf("%ld", &good[k]);}
    for(int k = 0; k < m; k++){scanf("%ld", &prep[k]);}

    int first(0), second(0);
    while(first < n && second < m){if(good[first] <= prep[second]){++first;}; ++second;}
    
    printf("%d\n", n - first);
    return 0;
}
