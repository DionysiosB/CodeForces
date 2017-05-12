#include <iostream>
#include <algorithm>

int main() {

    const long long bound = 1000;
    long long C, Hr, Hb, Wr, Wb;
    std::cin >> C >> Hr >> Hb >> Wr >> Wb;

    long long best = 0;
    if (Wr < Wb) {std::swap(Wr,Wb); std::swap(Hr,Hb); }

    if (Wr >= bound) {
        for (long long i=0; i*Wr <= C; ++i) {
            best = std::max(best, i * Hr + ((C - i * Wr) / Wb) * Hb );
        }
    } 
    else {
        if (Hr * Wb > Hb * Wr) {std::swap(Wr , Wb); std::swap(Hr , Hb); }
        for (long long i=0; i <= bound; ++i) {
            if (i * Wr > C) continue;
            best = std::max( best, i * Hr + ((C - i*Wr) / Wb) * Hb );
        }
    }

    std::cout << best << std::endl;

    return 0;
}
