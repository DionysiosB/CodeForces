#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s; s += '0';
        std::vector<long> a(n); for(long p = 0; p < n; p++){std::cin >> a[p];}
        a.push_back(0);

        long prev(-1), idx(-1);
        for(long p = 1; p <= n; p++){
            if(s[p - 1] == '0' && s[p] == '1'){prev = a[p - 1]; idx = p - 1;}
            else if(idx >= 0 && s[p - 1] == '1'){
                if(a[p - 1] < prev){s[idx] = '1'; idx = p - 1; s[p - 1] = '0'; prev = a[p - 1];}
                if(s[p] == '0'){prev = idx = -1;}
            }
        }

        long cnt(0);
        for(long p = 0; p < n; p++){cnt += (s[p] == '1') * a[p];}
        std::cout << cnt << std::endl;
    }

}
