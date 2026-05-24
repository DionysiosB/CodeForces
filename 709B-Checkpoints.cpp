#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

long abs(long x){return (x > 0) ? x : (-x);}

int main(){

    long n, a; scanf("%ld %ld\n", &n, &a);
    std::vector<long> v(n);
    for(int p = 0; p < n; p++){scanf("%ld", &v[p]);}
    sort(v.begin(), v.end());

    if(n == 1){puts("0");}
    else{printf("%ld\n", std::min(std::min(abs(v[0] - a) , abs(v[n - 2] - a)) + v[n - 2] - v[0] , std::min(abs(v[1] - a) , abs(v[n - 1] - a)) + v[n - 1] - v[1]));}

    return 0;
}
