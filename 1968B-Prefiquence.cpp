#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::string a, b; std::cin >> a >> b;
        long idx(0), cnt(0);
        for(long p = 0; p < b.size(); p++){
            if(b[p] == a[idx]){++cnt; ++idx;}
            if(idx >= a.size()){break;}
        }

        std::cout << cnt << std::endl;
    }

}
