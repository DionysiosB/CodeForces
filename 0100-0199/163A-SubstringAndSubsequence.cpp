#include<iostream>
#include<vector>
typedef long long ll;

int main(){

    const ll MOD = 1000000007;
    std::string s, t; std::cin >> s >> t;
    long n(s.size()), m(t.size());
    
    std::vector<std::vector<ll> > f(n, std::vector<ll>(m, 0));
    ll cnt(0);

    for(long p = 0; p < n; p++){
        for(long q = 0; q < m; q++){
            if(s[p] == t[q]){
                f[p][q] += 1 + ((p > 0 && q > 0) ? f[p-1][q-1] : 0);
                f[p][q] %= MOD;
            }

            if(q + 1 < m){f[p][q + 1] = f[p][q];}
        }

        cnt += f[p][m - 1]; cnt %= MOD;
    }

    std::cout << cnt << std::endl;
    return 0;
}
