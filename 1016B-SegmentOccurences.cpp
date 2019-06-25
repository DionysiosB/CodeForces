#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);

    long n, m, q; std::cin >> n >> m >> q;
    std::string s, t; std::cin >> s >> t;

    std::vector<long> v(n, 0);
    long ind(0);
    for(long p = 0; p < n; p++){
        if(p > 0){v[p] = v[p - 1];}
        if(s[p] == t[ind]){++ind;}
        else{ind = 0;}
        if(ind == m){++v[p]; ind = 0;}
    }

    for(long p = 0; p < n; p++){std::cout << s[p] << "\t";}; std::cout << std::endl;
    for(long p = 0; p < n; p++){std::cout << v[p] << "\t";}; std::cout << std::endl;
    while(q--){
        long l, r; std::cin >> l >> r;
        --l; --r; long cnt(0);
        //Two problems: First - where to move the left boundary
        //Second: what if there is a repetitive pattern, eg s = aaaaaaaaa, t = aaa

        cnt = v[r] - ((l > 0) ? v[l - 1] : 0);}
        std::cout << cnt << std::endl;
    }

    return 0;
}
