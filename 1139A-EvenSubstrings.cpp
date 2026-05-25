#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long long cnt(0);
    for(long p = 0; p < s.size(); p++){
        if((s[p] - '0') % 2 == 0){cnt += (p + 1);}
    }

    printf("%lld\n", cnt);

    return 0;
}
