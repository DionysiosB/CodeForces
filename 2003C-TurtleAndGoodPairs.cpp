#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    const int B = 26;

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        std::vector<long> f(B);
        for(char x : s){++f[x - 'a'];}

        std::string res("");
        while(res.size() < n){
            for(int p = 0; p < B; p++){
                if(f[p] <= 0){continue;}
                res += ('a' + p);
                --f[p];
            }
        }

        std::cout << res << std::endl;
    }

}
