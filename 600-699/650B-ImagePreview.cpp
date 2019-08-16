#include <iostream>
#include <vector>

int main(){

    int64_t n, a, b, t; std::cin >> n >> a >> b >> t;
    std::string s; std::cin >> s;

    int64_t pictime(0);
    std::vector<int64_t> c(2 * n);
    for(int64_t p = 0; p < n; p++){c[p] = c[p + n] = 1 + b * (s[p] == 'w'); pictime += c[p];}

    int64_t l(0), count(0);
    for(int64_t r = n; r < 2 * n; r++){
        pictime += c[r];
        while((r - l + 1 > n) || (pictime + (a * ((r - l) + std::min(r - n, n - l))) > t)){pictime -= c[l]; ++l;}
        if(l > n){break;}
        count = (count > (r - l + 1)) ? count : (r - l + 1);
    }

    std::cout << count << std::endl;

    return 0;
}
