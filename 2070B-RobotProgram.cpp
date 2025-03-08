#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    int64_t t; std::cin >> t;
    while(t--){
        int64_t n, x, k; std::cin >> n >> x >> k;
        std::string s; std::cin >> s;

        for(int64_t p = 0; x && p < s.size(); p++){
            x += (s[p] == 'R') - (s[p] == 'L');
            --k;
        }

        if(x){std::cout << "0" << std::endl; continue;}

        int64_t res(1);
        for(size_t p = 0; p < n; p++){
            x += (s[p] == 'R') - (s[p] == 'L');
            if(!x){res += k / (p + 1); break;}
        }

        std::cout << res << std::endl;
    }

}
