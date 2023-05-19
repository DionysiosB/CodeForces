#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    const long N = 26;

    long q; std::cin >> q;
    while(q--){
        long n; std::cin >> n;
        std::string s, t; std::cin >> s >> t;
        long diff(0);
        char x, y;
        std::vector<long> v(N, 0);
        for(long p = 0; p < n; p++){
            if(s[p] == t[p]){++v[s[p] - 'a'];}
            else if(diff == 0){x = s[p]; y = t[p]; diff = 1;}
            else if(diff == 1){
                if(s[p] == x && t[p] == y){diff = 2;}
                else{diff = -1; break;}
            }
            else{diff = -1; break;}
        }

        if(diff == 0){for(long p = 0; p < N; p++){if(v[p] >= 2){diff = 2; break;}}}

        std::cout << (diff == 2 ? "Yes" : "No") << std::endl;
    }

    return 0;
}
