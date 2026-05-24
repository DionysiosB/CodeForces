#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::vector<std::pair<long, long> > ch(4);
    for(long cb = 0; cb < 4; cb++){
        for(long row = 0; row < n; row++){
            std::string bw; std::cin >> bw;
            for(long col = 0; col < n; col++){
                ch[cb].first += (bw[col] == (((row + col) % 2) ? '0' : '1'));
                ch[cb].second += (bw[col] == (((row + col) % 2) ? '1' : '0'));
            }
        }
    }

    long mn(4 * 4 * n), cand;
    cand = ch[0].first + ch[1].first + ch[2].second + ch[3].second; mn = (mn < cand) ? mn : cand;
    cand = ch[0].first + ch[1].second + ch[2].first + ch[3].second; mn = (mn < cand) ? mn : cand;
    cand = ch[0].first + ch[1].second + ch[2].second + ch[3].first; mn = (mn < cand) ? mn : cand;
    cand = ch[0].second + ch[1].first + ch[2].first + ch[3].second; mn = (mn < cand) ? mn : cand;
    cand = ch[0].second + ch[1].first + ch[2].second + ch[3].first; mn = (mn < cand) ? mn : cand;
    cand = ch[0].second + ch[1].second + ch[2].first + ch[3].first; mn = (mn < cand) ? mn : cand;

    std::cout << mn << std::endl;

    return 0;
}
