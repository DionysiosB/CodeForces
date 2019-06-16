#include<cstdio>
#include<vector>
#define ll long long

ll dfs(ll prev, ll dish, ll rem, const std::vector<ll> &a, const std::vector<std::vector<ll> > &c, std::vector<std::vector<ll> > &dp){
    
    if(rem <= 0){return 0;}
    if(dp[prev][dish] >= 0){return dp[prev][dish];}
    for(ll p = 0; p < a.size(); p++){
        if(prev & (1 << p)){continue;}
        ll cand = dfs(prev ^ (1 << p), p,rem - 1, a, c, dp) + a[p] + c[dish][p];
        dp[prev][dish] = (cand > dp[prev][dish]) ? cand : dp[prev][dish];
    }
    
    return dp[prev][dish];
}

int main(){
    
    ll n, m, k; scanf("%lld %lld %lld",&n,&m,&k);
    std::vector<ll> a(n, 0); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<std::vector<ll> > dp(1<<19, std::vector<ll>(20, -1));
    std::vector<std::vector<ll> > c(20, std::vector<ll>(20, 0));
    while(k--){
        ll x, y, z; scanf("%lld %lld %lld", &x, &y, &z);
        --x; --y;
        c[x][y] = z;
    }
    
    printf("%lld\n", dfs(0, 19, m, a, c, dp));
    
    return 0;
} 
