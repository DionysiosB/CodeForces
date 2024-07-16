#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::string s; std::cin >> s;
        std::vector<long> va(m); for(long p = 0; p < m; p++){std::cin >> va[p]; --va[p];}
        std::string u; std::cin >> u;
        sort(va.begin(), va.end());
        sort(u.begin(), u.end());

        for(long p = 0; p < m; p++){
            long idx = va[p];
            if(!vb[idx]){vb[idx] = 1; s[idx] = u[p];}
            else if(u[p] < s[idx]){s[idx] = u[p];}
        }

        std::cout << s << std::endl;
    }



}
