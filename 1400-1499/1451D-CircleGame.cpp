#include <iostream>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    ll t; std::cin >> t;
    const double invsqrtwo = 0.7071067812;
    while(t--){
        ll d, k; std::cin >> d >> k;
        ll m = invsqrtwo * d / k;
        bool res = (k * k * (2 * m * (m + 1) + 1) <= d * d);
        std::cout << (res ? "Ashish" : "Utkarsh") << std::endl;
    }

}
