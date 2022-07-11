#include <iostream>
#include <vector>

int main(){

    long n; std::cin >> n;
    std::vector<long> v('z' - 'a' + 1, 0);
    while(n--){std::string s; std::cin >> s; ++v[s[0] - 'a'];}
     
    long long cnt(0);
    for(long p = 0; p < v.size(); p++){
        long a = v[p] / 2;
        long b = v[p] - a;
        cnt += a * (a - 1) / 2 + b * (b - 1) / 2;
    }

    printf("%lld\n", cnt);

    return 0;
}
