#include <iostream>

int main(){

    long n; std::cin >> n;
    const std::string f = "RGB";
    std::string s; std::cin >> s;

    long cnt(0);
    for(long p = 1; p < n; p++){
        if(s[p] == s[p - 1]){
            ++cnt;
            for(long u = 0; u < 3; u++){
                if(f[u] != s[p - 1] && ((p == n - 1) || f[u] != s[p + 1])){s[p] = f[u]; break;}
            }
        }
    }

    std::cout << cnt << std::endl;
    std::cout << s << std::endl;

    return 0;
}
