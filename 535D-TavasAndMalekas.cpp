#include <iostream>
typedef long long ll;

int main(){

    const ll N = 26;
    const ll MOD = 1000000007;
    std::ios_base::sync_with_stdio(false);

    ll n, m; std::cin >> n >> m;
    std::string t; std::cin >> t;
    ll last(-1), cnt(n);
    bool possible(true);

    while(m--){
        long x; std::cin >> x;
        if(last < 0 || x >= last + t.size()){cnt -= t.size();}
        else{
            if(t[x - last] != t[0]){possible = false; break;}
            else{cnt -= (x - last);}
        }

        last = x;
    }

    if(possible){
        ll prod(1); while(cnt--){prod *= N; prod %= MOD;}
        std::cout << prod << std::endl;
    }
    else{std::cout << "0" << std::endl;}

    return 0;
}
