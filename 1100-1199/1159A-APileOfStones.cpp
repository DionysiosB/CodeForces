#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;
    long cnt(0), mn(0);
    for(long p = 0; p < s.size(); p++){
        cnt += (s[p] == '+') - (s[p] == '-');
        mn = (mn < cnt) ? mn : cnt;
    }
    printf("%ld\n", cnt - mn);

    return 0;
}
