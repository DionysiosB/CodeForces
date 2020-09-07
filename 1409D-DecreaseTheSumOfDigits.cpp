#include <iostream>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        std::string num; std::cin >> num;
        long s; std::cin >> s;
        long cs(0);
        for(long p = 0; p < num.size(); p++){cs += (num[p] - '0');}
        if(cs <= s){puts("0"); continue;}

        ll mult(1), cnt(0), carry(0);
        for(long p = num.size() - 1; p >= 0 && cs >= s; p--){
            cs -= (num[p] - '0');
            ll diff = (10 - (num[p] - '0') - carry) % 10;
            cnt += mult * diff;
            if(num[p] > '0'){carry = 1;}
            mult *= 10;
        }

        printf("%lld\n", cnt);

    }

    return 0;
}
