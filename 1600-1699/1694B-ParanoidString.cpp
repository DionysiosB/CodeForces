#include <iostream>
#include <vector>
typedef long long ll;

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        ll res(n);
        for(long p = 1; p < n; p++){res += (s[p - 1] != s[p]) * p;}
        std::cout << res << std::endl;
    }

}
