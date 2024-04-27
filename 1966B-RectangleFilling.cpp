#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        int wmnr(n + 1), bmnr(n + 1), wmxr(-1), bmxr(-1), wmnc(m + 1), bmnc(m + 1), wmxc(-1), bmxc(-1);
        for(long row = 0; row < n; row++){
            std::string s; std::cin >> s;
            for(int col = 0; col < s.size(); col++){
                if(s[col] == 'W'){
                    wmnr = (row < wmnr ? row : wmnr);
                    wmxr = (row > wmxr ? row : wmxr);
                    wmnc = (col < wmnc ? col : wmnc);
                    wmxc = (col > wmxc ? col : wmxc);
                }
                else if(s[col] == 'B'){
                    bmnr = (row < bmnr ? row : bmnr);
                    bmxr = (row > bmxr ? row : bmxr);
                    bmnc = (col < bmnc ? col : bmnc);
                    bmxc = (col > bmxc ? col : bmxc);
                }
            }
        }

        bool possible(false);
        if(wmnr == 0 && wmxr == n - 1 && wmnc == 0 && wmxc == m - 1){possible = true;}
        if(bmnr == 0 && bmxr == n - 1 && bmnc == 0 && bmxc == m - 1){possible = true;}
        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
