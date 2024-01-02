#include <iostream>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::set<char> u; long cnt(0);
        for(long p = 0; p < s.size(); p++){
            u.insert(s[p]);
            cnt += u.size();
        }

        std::cout << cnt << std::endl;
    }

}
