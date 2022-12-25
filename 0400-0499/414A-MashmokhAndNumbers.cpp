#include <cstdio>
#include <iostream>

int main(){

    long n, k; std::cin >> n >> k;

    if((n == 1 && k > 0) || k < n/2){puts("-1"); return 0;}
    else if(n == 1 && k == 0){puts("1"); return 0;}


    long first = k - (n - 2) / 2;
    long second = 2 * first;
    printf("%ld %ld ", first, second);

    long remaining(n - 2);
    for(long p = 2; p < 4 * n && remaining > 0; p += 2){
        if(p == first || p == second || p + 1 == first || p + 1 == second){continue;}
        if(remaining >= 2){printf("%ld %ld ", p , p + 1); remaining -= 2;}
        else{printf("%ld", p); --remaining;}
    }

    puts("");

    return 0;
}
