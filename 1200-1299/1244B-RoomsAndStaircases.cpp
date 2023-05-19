#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long mx(n);
        for(long p = 0; p < n; p++){
            if(s[p] == '0'){continue;}
            long cur = 2 * ((2 * p < n) ? (n - p) : (p + 1));
            mx = (mx > cur) ? mx : cur;
        }

        printf("%ld\n", mx);
    }

    return 0;
}
