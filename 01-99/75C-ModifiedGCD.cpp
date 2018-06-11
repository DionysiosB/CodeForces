#include <cstdio>
#include <vector>
#include <algorithm>

long gcd(long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long a, b; scanf("%ld %ld\n", &a, &b);
    long g = gcd(a, b);
    std::vector<long> div;
    for(long p = 1; p * p <= g; p++){
        if(g % p == 0){
            div.push_back(p);
            if(p * p < g){div.push_back(g / p);}
        }
    }
    sort(div.begin(), div.end());

    long q; scanf("%ld", &q);
    while(q--){
        long low, high; scanf("%ld %ld", &low, &high);
        long mgcd = *(--(std::upper_bound(div.begin(), div.end(), high)));
        printf("%ld\n", (mgcd >= low) ? mgcd : -1);
    }

    return 0;
}
