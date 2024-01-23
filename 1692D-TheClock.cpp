#include <iostream>
#include <set>

const long B = 24 * 60;

bool isPalin(long x){
    const long h = x / 60;
    const long m = x % 60;
    return ((h / 10) == (m % 10)) && ((h % 10) == (m / 10));
}

long convert(std::string x){
    return (10 * 60 * (x[0] - '0') + 60 * (x[1]- '0') + 10 * (x[3] - '0') + (x[4] - '0'));
}

int main(){

    std::set<long> palins;
    for(long min = 0; min < B; min++){
        if(isPalin(min)){palins.insert(min);}
    }

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; long interval;
        std::cin >> s >> interval;
        long start = convert(s);
        long cur(start), cnt(palins.count(start));
        for(long p = 1; p < B; p++){
            cur += interval; cur %= B;
            if(cur == start){break;}
            cnt += palins.count(cur);
        }

        std::cout << cnt << std::endl;
    }


}
