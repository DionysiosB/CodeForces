#include <cstdio>
#include <vector>

int main(){

    int n, m; scanf("%d %d\n", &n, &m);
    std::vector<int> plant(n);

    for(int p = 0; p < n; p++){double a; scanf("%d %lf\n", &plant[p], &a);}

    std::vector<int> dp(n);
    int maxLength(0);
    for(int p = 0; p < n; p++){
        dp[p] = 1;
        for(int q = 0; q < p; q++){if(plant[q] <= plant[p] && dp[q] >= dp[p]){dp[p] = dp[q] + 1;}}
        if(dp[p] > maxLength){maxLength = dp[p];}
    }

    printf("%d\n", n - maxLength);

    return 0;
}
