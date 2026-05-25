#include <iostream>
#include <vector>

int main(){

    const int N = 150;
    long n; std::cin >> n;
    std::string s; std::cin >> s;
    std::vector<int> a(n), b(n);
    for(long p = 0; p < n; p++){std::cin >> a[p] >> b[p];}
    std::vector<std::vector<int> > f(n, std::vector<int>(N, 0));
    long mx(0);
    for(long p = 0; p < n; p++){f[p][0] = (s[p] - '0'); mx += f[p][0];}
    for(long t = 1; t < N; t++){
        long cnt(0);
        for(long p = 0; p < n; p++){
            if((t >= b[p]) && ((t - b[p]) % a[p] == 0)){f[p][t] = 1 - f[p][t - 1];}
            else{f[p][t] = f[p][t - 1];}
            cnt += f[p][t];
        }
        mx = (mx > cnt) ? mx : cnt;
    }

    std::cout << mx << std::endl;

    return 0;
}
