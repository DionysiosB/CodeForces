#include <iostream>
#include <vector>

int main(){

    int64_t n, k, x; std::cin >> n >> k >> x;
    std::vector<int64_t> a(n);
    for(int64_t p = 0; p < n; p++){std::cin >> a[p];}


    std::vector<int64_t> orPrev(n, 0);
    for(int64_t p = 1; p < n; p++){orPrev[p] = orPrev[p - 1] | a[p - 1];}

    std::vector<int64_t> orNext(n, 0);
    for(int64_t p = n - 2; p >= 0; p--){orNext[p] = orNext[p + 1] | a[p + 1];}

    int64_t mult(1); while(k--){mult *= x;}

    int64_t res(0);
    for(int64_t p = 0; p < n; p++){res = std::max(res, (orPrev[p] | (mult * a[p]) | orNext[p]));}
    std::cout << res << std::endl;

    return 0;
}
