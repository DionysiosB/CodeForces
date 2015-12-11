#include <cstdio>
#include <vector>

int main(){

    const long M = 1000000007;
    int n, k, d; scanf("%d %d %d\n", &n, &k, &d);
    std::vector<std::pair<long long, long long> > ways(n + 1);

    ways[0].first = 1; ways[0].second = 0;
    for(int p = 1; p <= n; p++){
        for(int b = 1; b <= k && b <= p; b++){
            if(b < d){
                ways[p].first  += ways[p - b].first;  ways[p].first  %= M;
                ways[p].second += ways[p - b].second; ways[p].second %= M;
            }
            else{
                ways[p].second += (ways[p - b].first + ways[p - b].second); ways[p].second  %= M;
            }
        }
    }

    printf("%lld\n", ways[n].second);

    return 0;
}
