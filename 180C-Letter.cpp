#include <iostream>
#include <vector>

int main(){

    std::string s; getline(std::cin, s);
    long n = s.size();
    std::vector<long> caps(n + 1, 0);
    for(long p = 0; p < n; p++){caps[p + 1] = caps[p] + ('A' <= s[p] && s[p] <= 'Z');}
    long currentMin(n);
    for(long p = 0; p <= n; p++){
        long test = (p - caps[p]) + (caps[n] - caps[p]);
        if(test < currentMin){currentMin = test;}
    }

    std::cout << currentMin << std::endl;

    return 0;
}
