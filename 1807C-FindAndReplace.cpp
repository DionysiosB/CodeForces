#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::vector<int> a(26, -1);
        bool ans(true);
        for(long p = 0; ans && p < s.size(); p++){
            int x = s[p] - 'a';
            if(a[x] < 0){a[x] = p % 2;}
            else if(a[x] != p % 2){ans = false;}
        }

        std::cout << (ans ? "YES" : "NO") << std::endl;
    }

}
