#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        for(long p = 0; p + 2 < n; p++){
            if(s[p] == '1' && s[p + 2] == '1'){s[p + 1] = '1';}
        }

        long idx(0), cnt(0), add(0);
        while(idx < n){
            if(s[idx] == '1'){++cnt;}
            if((s[idx] == '1') && (idx + 2 < n) && (s[idx + 2] == '1')){++idx; ++add;}
            ++idx;
        }


        std::cout << cnt << " " << (cnt + add) << std::endl;
    }

}
