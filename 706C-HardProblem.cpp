#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<long> c(n);
    for(long p = 0; p < n; p++){std::cin >> c[p];}
    std::vector<std::string> s(n);
    for(long p = 0; p < n; p++){std::cin >> s[p];}

    std::vector<std::vector<long long> > dp(n, std::vector<long long>(2, 0));
    dp[0][0] = 0; dp[0][1] = c[0];
    for(int p = 1; p < n; p++){
        std::string rr = s[p - 1]; std::reverse(rr.begin(), rr.end());
        std::string rc = s[p];     std::reverse(rc.begin(), rc.end());

        long long candA(-1), candB(-1);
        if(s[p - 1] <= s[p] && dp[p - 1][0] >= 0){candA = dp[p - 1][0];}
        if(rr <= s[p] && dp[p - 1][1] >= 0){candB = dp[p - 1][1];}

        if(candA >= 0 && candB >= 0){dp[p][0] = (candA < candB) ? candA : candB;}
        else if(candA >= 0){dp[p][0] = candA;}
        else if(candB >= 0){dp[p][0] = candB;}
        else{dp[p][0] = -1;}

        candA = candB = -1;
        if(s[p - 1] <= rc && dp[p - 1][0] >= 0){candA = dp[p - 1][0] + c[p];}
        if(rr <= rc && dp[p - 1][1] >= 0){candB = dp[p - 1][1] + c[p];}

        if(candA >= 0 && candB >= 0){dp[p][1] = (candA < candB) ? candA : candB;}
        else if(candA >= 0){dp[p][1] = candA;}
        else if(candB >= 0){dp[p][1] = candB;}
        else{dp[p][1] = -1;}
    }

    long long ans;
    if(dp[n - 1][0] >= 0 && dp[n - 1][1] >= 0){ans = (dp[n - 1][0] < dp[n - 1][1]) ? dp[n - 1][0] : dp[n - 1][1];}
    else if(dp[n - 1][0] >= 0){ans = dp[n - 1][0];}
    else if(dp[n - 1][1] >= 0){ans = dp[n - 1][1];}
    else{ans = -1;}

    std::cout << ans << std::endl;

    return 0;
}
