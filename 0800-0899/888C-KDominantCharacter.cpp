#include <iostream>
#include <vector>

int main(){

    const int N = 26;
    std::string s; std::cin >> s;
    std::vector<long> sv(N, -1), lv(N, 0);

    for(long p = 0; p < s.size(); p++){
        int c = s[p] - 'a';
        long diff = p - sv[c];
        sv[c] = p;
        lv[c] = (lv[c] > diff) ? lv[c] : diff;
    }

    for(long p = 0; p < N; p++){
        long diff = s.size() - sv[p];
        lv[p] = (lv[p] > diff) ? lv[p] : diff;
    }

    long res(s.size() + 1);
    for(long p = 0; p < N; p++){res = (res < lv[p]) ? res : lv[p];}
    std::cout << res << std::endl;

    return 0;
}
