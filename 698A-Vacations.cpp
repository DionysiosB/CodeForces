#include <cstdio>
#include <vector>

int main(){

    const int N = 3; //Number of possible activities in a day;
    const int INF = 10000;  //A really large number

    int n; scanf("%d\n", &n);
    std::vector<std::vector<int> > dp(N, std::vector<int>(n + 1, 0));
    //First row: Do nothing; Second row: Do sports; Third row: Do programming

    for(int p = 1; p <= n; p++){
        int a; scanf("%d", &a);
        dp[0][p] = 1 + std::min(dp[0][p - 1], std::min(dp[1][p - 1], dp[2][p - 1]));
        dp[1][p] = (a == 0 || a == 1) ? INF : std::min(dp[0][p - 1], dp[2][p - 1]);
        dp[2][p] = (a == 0 || a == 2) ? INF : std::min(dp[0][p - 1], dp[1][p - 1]);
    }



    printf("%d\n", std::min(dp[0][n], std::min(dp[1][n], dp[2][n])));

    return 0;
}
