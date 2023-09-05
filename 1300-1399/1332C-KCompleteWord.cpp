#include <iostream>
#include <vector>
#include <set>
#include <map>

int main(){
    
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::string s; std::cin >> s;
        long chg(0);
        for(long p = 0; 2 * p < k; p++){
            std::map<char, long> tally;
            for(long u = p; u < n; u += k){++tally[s[u]];}
            long sz(n / k);
            if(2 * p < k - 1){
                for(long u = k - 1 - p; u < n; u += k){++tally[s[u]];}
                sz *= 2;
            }

            long mx(0);
            for(std::map<char, long>::iterator it = tally.begin(); it != tally.end(); it++){mx = (mx > (it->second)) ? mx : (it->second);}
            chg += (sz - mx);
        }

        std::cout << chg << std::endl;
    }

    return 0;
}
