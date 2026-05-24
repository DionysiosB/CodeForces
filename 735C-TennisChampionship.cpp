#include <iostream>
#include <vector>

int main(){
    
    const int N = 100;
    unsigned long long n; std::cin >> n;
    
    std::vector<unsigned long long> fib(N, 0);
    fib[0] = 2; fib[1] = 3;
    int num(0);

    for(int p = 2; p < N; p++){
        fib[p] = fib[p - 1] + fib[p - 2];
        if(fib[p] > n){num = p; break;}
    }

    if(n == 2){num = 1;}
    else if(n == 3){num = 2;}
    std::cout << num << std::endl;

    return 0;
}
