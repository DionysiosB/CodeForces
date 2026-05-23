#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>


int main(){

    long n(0); scanf("%ld", &n);
    std::vector<long> data(n, 0);
    for(int k = 0; k < n; k++){scanf("%ld", &data[k]);}
    std::sort(data.begin(), data.end());

    long long start = 1;
    long long output = 0;
    while(start <= n){
        for(int k = n - start; k < n; k++){output += data[k];}
        start *= 4;
    }

    printf("%lld\n", output);

    return 0;
}
