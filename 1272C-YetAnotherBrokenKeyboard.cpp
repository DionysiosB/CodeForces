#include <iostream>
#include <vector>
typedef long long ll;

int main(){

    const int N = 26;
    std::ios_base::sync_with_stdio(false);
    ll n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;
    std::vector<bool> f(N, 0);
    for(ll p = 0; p < k; p++){char c; std::cin >> c; f[c - 'a'] = 1;}
    std::vector<ll> b;
    ll cnt(0);
    for(ll p = 0; p < n; p++){
        if(f[s[p] - 'a']){++cnt; continue;}
        b.push_back(cnt); cnt = 0;
    }

    ll total(cnt * (cnt + 1) / 2);
    for(ll p = 0; p < b.size(); p++){total += b[p] * (b[p] + 1) / 2;}
    std::cout << total << std::endl;

    return 0;
}
