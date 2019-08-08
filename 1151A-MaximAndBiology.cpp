#include <iostream>

int main(){

    const int N = 26;
    long n; std::cin >> n;
    std::string s; std::cin >> s;

    long mn(27 * 5);
    for(long p = 0; p + 3 < s.size(); p++){
        long sa = s[p + 0] - 'A'; sa = (sa > 0) ? sa : -sa; if(2 * sa > N){sa = N - sa;}
        long sb = s[p + 1] - 'C'; sb = (sb > 0) ? sb : -sb; if(2 * sb > N){sb = N - sb;}
        long sc = s[p + 2] - 'T'; sc = (sc > 0) ? sc : -sc; if(2 * sc > N){sc = N - sc;}
        long sd = s[p + 3] - 'G'; sd = (sd > 0) ? sd : -sd; if(2 * sd > N){sd = N - sd;}
        long total = sa + sb + sc + sd;
        mn = (mn < total) ? mn : total;
    }

    std::cout << mn << std::endl;

    return 0;
}
