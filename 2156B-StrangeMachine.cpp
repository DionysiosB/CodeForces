#include <iostream>

int main() {

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n, q; std::cin >> n >> q;
        std::string s; std::cin >> s;

        bool div(false);
        for(char x : s){if(x == 'B'){div = true; break;}}

        while(q--){
            long a; std::cin >> a;
            if(!div){std::cout << a << std::endl; continue;}

            long idx(0), cnt(0);
            while(a){
                if(s[idx] == 'A'){--a;}
                else{a /= 2;}
                idx = (idx + 1) % s.size();
                ++cnt;
            }

            std::cout << cnt << std::endl;
        }

    }

}
