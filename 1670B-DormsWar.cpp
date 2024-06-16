#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long k; std::cin >> k;
        std::vector<bool> v(26, 0);
        for(long p = 0; p < k; p++){
            char x; std::cin >> x;
            v[x - 'a'] = 1;
        }

        long mxlen(0), last(0);
        for(long p = 1; p < s.size(); p++){
            if(v[s[p] - 'a']){
                long len = p - last;
                mxlen = (mxlen > len ? mxlen : len);
                last = p;
            }
        }

        std::cout << mxlen << std::endl;
    }

}
