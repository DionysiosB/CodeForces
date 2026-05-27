#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::vector<long> left(s.size(), 0), right(s.size(), 0);
        long cnt(0); std::vector<bool> v(26, false);
        for(long p = 0; p < s.size(); p++){
            int cur = s[p] - 'a';
            if(!v[cur]){++cnt; v[cur] = true;}
            left[p] = cnt;
        }

        cnt = 0; v = std::vector<bool>(26, false);
        for(long p = s.size() - 1; p >= 0; p--){
            int cur = s[p] - 'a';
            if(!v[cur]){++cnt; v[cur] = true;}
            right[p] = cnt; 
        }

        long res(0);
        for(long p = 1; p < s.size(); p++){
            long tst = left[p - 1] + right[p];
            res = (res > tst) ? res : tst;
        }

        std::cout << res << std::endl;
    }

}
