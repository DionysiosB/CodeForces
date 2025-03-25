#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::vector<std::string> b(n);
        for(long row = 0; row < n; row++){std::cin >> b[row];}

        std::vector<std::vector<bool> > d(n, std::vector<bool>(m, 0));
        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                if(b[row][col] == '0'){break;}
                d[row][col] = 1;
            }
        }

        for(long col = 0; col < m; col++){
            for(long row = 0; row < n; row++){
                if(b[row][col] == '0'){break;}
                d[row][col] = 1;
            }
        }

        bool res(true);
        for(long row = 0; res && row < n; row++){
            for(long col = 0; res && col < m; col++){
                if(b[row][col] == '1' && !d[row][col]){res = false;}
            }
        }

        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
