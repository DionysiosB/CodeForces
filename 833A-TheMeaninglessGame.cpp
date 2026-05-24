#include <cstdio>
#include <iostream>

const int64_t B = 1e6 + 10;
int64_t cubicRoot(int64_t x){

    int64_t left(0), right(B);
    while(left <= right){
        int64_t mid = (left + right) / 2;
        int64_t test = mid * mid * mid;
        if(test == x){return mid;}
        else if(test < x){left = mid + 1;}
        else if(test > x){right = mid - 1;}
    }

    return 0;
}


int main(){

    long n; scanf("%ld", &n);
    while(n--){
        int64_t a, b; scanf("%lld %lld", &a, &b);
        int64_t x = cubicRoot(a * b);
        puts(((x > 0) && (a % x == 0) && (b % x == 0)) ? "Yes" : "No");
    }

    return 0;
}
