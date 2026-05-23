#include <cstdio>
#include <vector>

int main(){

    long long n; scanf("%lld", &n);
    long long m = n;

    long ansA(1), ansB(0);
    std::vector<int> digits;
    while(m > 0){ansA *= 2; digits.push_back(m % 10); m /= 10;}
    for(int p = digits.size() - 1; p >= 0; p--){
        ansB = 2 * ansB + (digits[p] == 7);
    }

    long ans = ansA + ansB - 1;
    printf("%ld\n", ans);

    return 0;
}
