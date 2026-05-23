#include <cstdio>
#include <iostream>
#include <string>

int main(){

    const int P = 26;

    long n, p; scanf("%ld %ld\n", &n, &p);
    std::string input; getline(std::cin, input);
    --n; --p;
    if(p > n/2){p = n - p;}

    long l(-1), r(0), total(0);
    for(long d = 0; d <= n/2; d++){
        if(input[d] != input[n - d]){
            int diff = input[d] - input[n - d];
            if(diff < 0){diff += 26;}
            if(diff > P / 2){diff = P - diff;}
            total += diff;
            if(l < 0){l = d;}
            r = d;
        }
    }

    if(p <= l){total += r - p;}
    else if(l <= p && p <= r && (p - l <= r - p)){total += (p - l) + (r - l);}
    else if(l <= p && p <= r && (r - p <  p - l)){total += (r - p) + (r - l);}
    else if(r <= p){total += p - l;}

    if(l < 0){puts("0");}
    else{printf("%ld\n", total);}

    return 0;
}
