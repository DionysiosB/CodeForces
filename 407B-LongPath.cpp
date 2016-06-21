#include <cstdio>
#include <vector>

int main(){

    const long long M = 1000000007;
    int n; scanf("%d\n", &n);

    std::vector<int> p(n + 1, 0);
    for(int k = 1; k <= n; k++){scanf("%d", &p[k]);}

    std::vector<long long> steps(n + 2, 0);

    for(int k = 2; k <= n + 1; k++){
        //Steps to (k - 1) then one transition to p[k - 1], then (steps[k - 1] - steps[p[k - 1]] to go back to (k - 1) plus one more to reach k;
        steps[k] = steps[k - 1] + 1 + (steps[k - 1] - steps[p[k - 1]]) + 1;
        steps[k] = (3 * M + steps[k] ) % M;
    }

    printf("%lld\n", steps[n + 1]);

    return 0;
}
