#include<iostream>
#include<vector>

int main(){
    int64_t n,k; scanf("%lld%lld", &n, &k);
    std::vector<int64_t> fib(n + 2, 0); fib[1] = 1;

    for(int64_t p = 2; p <= n + 1; p++){fib[p] = fib[p - 1] + fib[p - 2];}
    for(int64_t p = 0; p < n; p++){
        if(fib[n - p] < k){printf("%lld %lld ", p + 2, p + 1); k -= fib[n - p]; ++p;}
        else{printf("%lld ", p + 1);}
    }

    return 0;
}
