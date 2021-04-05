#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<bool> digits(m);
    bool res(true);
    while(n > 0){
        long x = n % m;
        if(digits[x]){res = false; break;}
        digits[x] = true;
        n /= m;
    }

    puts(res ? "YES" : "NO");

    return 0;
}
