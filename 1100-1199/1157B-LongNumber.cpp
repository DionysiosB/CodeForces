#include <iostream>
#include <vector>

int main(){

    const int D = 10;
    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::vector<long> a(D); for(long p = 1; p < D; p++){scanf("%ld", &a[p]);}

    long idx(0);
    while(idx < s.size() && a[s[idx] - '0'] <= (s[idx] - '0')){++idx;}
    while(idx < s.size() && a[s[idx] - '0'] >= (s[idx] - '0')){s[idx] = '0' + a[s[idx] - '0'];  ++idx;}
    std::cout << s << std::endl;

    return 0;
}
