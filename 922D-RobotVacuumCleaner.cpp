#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

struct snippet{std::string str; ll s, h;};

bool snippetSort(snippet A, snippet B){return A.s * B.h > B.s * A.h;}

int main(){

    ll n; std::cin >> n;
    std::vector<snippet> v(n);
    for(ll p = 0; p < n; p++){
        std::string x; std::cin >> x;
        ll a(0), b(0);
        for(ll p = 0; p < x.size(); p++){
            a += (x[p] == 's');
            b += (x[p] == 'h');
        }
        v[p].str = x; v[p].s = a; v[p].h = b;
    }

    sort(v.begin(), v.end(), snippetSort);

    ll cnt(0), ss(0);
    for(ll p = 0; p < n; p++){
        for(ll u = 0; u < v[p].str.size(); u++){
            if(v[p].str[u] == 's'){++ss;}
            else{cnt += ss;}
        }
    }

    std::cout << cnt << std::endl;

    return 0;
}
