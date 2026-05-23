#include <iostream>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string recipe; std::cin >> recipe;
    ll rb(0), rs(0), rc(0);
    for(long p = 0; p < recipe.size(); p++){
        if(recipe[p] == 'B'){++rb;}
        else if(recipe[p] == 'S'){++rs;}
        else if(recipe[p] == 'C'){++rc;}
    }

    ll hb, hs, hc; std::cin >> hb >> hs >> hc;
    ll pb, ps, pc; std::cin >> pb >> ps >> pc;
    ll r; std::cin >> r;


    ll left(0), right(1e15), res(0);
    while(left <= right){
        ll mid = (left + right) / 2;

        ll nb = mid * rb - hb; nb = (nb > 0) ? nb : 0;
        ll ns = mid * rs - hs; ns = (ns > 0) ? ns : 0;
        ll nc = mid * rc - hc; nc = (nc > 0) ? nc : 0;
        
        ll cost = nb * pb + ns * ps + nc * pc;
        if(cost <= r){res = mid; left = mid + 1;}
        else{right = mid - 1;}
    }

    std::cout << res << std::endl;

    return 0;
}
