#include <cstdio>
#include <algorithm>

int64_t Gcd(int64_t a, int64_t b){return b ? Gcd(b, a % b) : a;}
int64_t lcm(int64_t a, int64_t b){return a * b / Gcd(a, b);}

int main()
{
    int64_t c, hr, hb, wr, wb, ans = 0; 
    scanf("%lld %lld %lld %lld %lld", &c, &wr, &hr, &wb, &hb);
    int64_t commonMult = lcm(wr, wb);
    int64_t wholes = c / commonMult;
    c %= commonMult;
    if(wholes){--wholes; c += commonMult;} 
    int64_t sum = wholes * std::max(commonMult / wr * hr, commonMult / wb * hb);
    if(wr < wb){std::swap(wr, wb); std::swap(hr, hb);}
    for(int i = 0; i <= c / wr; i++){ans = std::max(ans, i * hr + (c - i * wr) / wb * hb);}
    ans += sum;
    printf("%lld\n", ans);
    
    return 0;
}
