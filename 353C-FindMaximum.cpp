#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> a(n,0);
    long ans(0), sum(0);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]); sum += a[p];}
    scanf("\n"); std::string x; getline(std::cin, x);

    for(long p = n - 1; p >= 0; p--){
        if(x[p] == '1'){ans = (ans > (sum - a[p])) ? ans : (sum - a[p]);}
        else{sum -= a[p];}
    }

    if(ans < sum){ans = sum;}

    printf("%ld\n", ans);

    return 0;
}
