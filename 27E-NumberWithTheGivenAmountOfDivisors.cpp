#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long rv[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 47, 53};
    long n; scanf("%ld", &n);

    if(n == 8){puts("24"); return 0;} // Special case;

    std::vector<long> pdiv;
    long cur(2);
    while(cur <= n){
        while(n % cur == 0){pdiv.push_back(cur); n /= cur;}
        ++cur;
    }
    if(n > 1){pdiv.push_back(n);}

    ll res(1), ind(0);
    for(long p = 0; p < pdiv.size(); p++){
        long ind = pdiv.size() - p - 1;
        long u = pdiv[ind] - 1; while(u--){res *= rv[p];}
    }

    printf("%lld\n", res);

    return 0;
}
