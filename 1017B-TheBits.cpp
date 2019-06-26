#include <iostream>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    ll n; std::cin >> n;
    std::string a, b; std::cin >> a >> b;

    ll zz(0), zn(0), nz(0), nn(0);
    for(ll p = 0; p < n; p++){
        zz += (a[p] == '0' && b[p] == '0');
        zn += (a[p] == '0' && b[p] == '1');
        nz += (a[p] == '1' && b[p] == '0');
        nn += (a[p] == '1' && b[p] == '1');
    }

    ll res = zz * nn + nz * zn + zz * nz;
    std::cout << res << std::endl;

    return 0;
}
