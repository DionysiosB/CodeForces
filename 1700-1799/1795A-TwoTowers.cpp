#include <iostream>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::string a, b; std::cin >> a >> b;
        std::reverse(b.begin(), b.end()); a += b;
        bool first(false), possible(true);
        for(long p = 1; possible && p < a.size(); p++){
            bool same = (a[p] == a[p - 1]); 
            if(first && same){possible = false; break;}
            else if(same){first = true;}
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

}
