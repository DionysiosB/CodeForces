#include <iostream>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;

    std::set<long> pileset;
    for(long p = 0; p < n; p++){
        std::string s1, s2; std::cin >> s1 >> s2;
        long a(s1[0] - '0'), b(s1[1] - '0'), c(s2[1] - '0'), d(s2[0] - '0'); 
        long x = 1000 * a + 100 * b + 10 * c + d;
        long y = 1000 * b + 100 * c + 10 * d + a;
        long z = 1000 * c + 100 * d + 10 * a + b;
        long w = 1000 * d + 100 * a + 10 * b + c;
        if(!(pileset.count(x) || pileset.count(y) || pileset.count(z) || pileset.count(w))){pileset.insert(x);}
        if(p < n - 1){std::cin >> s1;}
    }

    std::cout << pileset.size() << std::endl;

    return 0;
}
