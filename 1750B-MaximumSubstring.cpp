#include <iostream>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        ll cn(0), cz(0), ln(0), lz(0), bn(0), bz(0);
        for(ll p = 0; p < s.size(); p++){
            int x = (s[p] - '0');
            if(x == 0){bn = 0; ++cz; ++bz; lz = (lz > bz) ? lz : bz;}
            if(x == 1){bz = 0; ++cn; ++bn; ln = (ln > bn) ? ln : bn;}
        }

        ll res = lz * lz;
        res = (res > ln * ln) ? res : (ln * ln);
        res = (res > cz * cn) ? res : (cz * cn);
        printf("%lld\n", res);
    }

}
