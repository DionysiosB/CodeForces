#include <iostream>
#include <vector>

long find(std::vector<long> &f, long x){return (x == f[x]) ? x : (f[x] = find(f, f[x]));}

int main(){

    const long N = 26;
    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::string s, t; std::cin >> s >> t;
    std::vector<long> h(N); for(long p = 0; p < N; p++){h[p] = p;}
    long cnt(0);

    for(long p = 0; p < n; p++){
        long x(s[p] - 'a'), y(t[p] - 'a');
        long rx(find(h, x)), ry(find(h, y));
        if(rx != ry){h[rx] = ry; ++cnt;}
    }

    std::cout << cnt << std::endl;
    for(long p = 0; p < N; p++){
        if(h[p] == p){continue;}
        std::cout << (char)('a' + p) << " " << (char)('a' + find(h, p)) << std::endl;
    }

    return 0;
}
