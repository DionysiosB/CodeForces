#include <cstdio>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        printf("%ld\n", std::max(std::abs(a - b), std::abs(a + c - b)));
    }

}
