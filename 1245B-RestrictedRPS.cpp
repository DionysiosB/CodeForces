#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){

        long n; std::cin >> n;
        long a, b, c; std::cin >> a >> b >> c;
        std::string g; std::cin >> g;

        long cnt(0);
        std::string h(g);
        for(long p = 0; p < g.size(); p++){
            if(g[p] == 'R'){
                if(b > 0){++cnt; --b; h[p] = 'P';}
                else{h[p] = '_';}
            }
            else if(g[p] == 'P'){
                if(c > 0){++cnt; --c; h[p] = 'S';}
                else{h[p] = '_';}
            }
            else if(g[p] == 'S'){
                if(a > 0){++cnt; --a; h[p] = 'R';}
                else{h[p] = '_';}
            }
        }

        for(long p = 0; p < h.size(); p++){
            if(h[p] != '_'){continue;}
            if(a > 0){h[p] = 'R'; --a;}
            else if(b > 0){h[p] = 'P';--b;}
            else if(c > 0){h[p] = 'S'; --c;}
        }

        if(2 * cnt >= n){std::cout << "YES" << std::endl << h << std::endl;}
        else{std::cout << "NO" << std::endl;}
    }

    return 0;
}
