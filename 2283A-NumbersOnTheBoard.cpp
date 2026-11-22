#include <cstdio>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long l, r; scanf("%ld %ld", &l, &r);
        if(l == 0 || r == 0){printf("%ld\n", std::max(std::max(-l, r) - 1, 0L));}
        else if(l * r > 0){printf("%ld\n", r - l);}
        else{printf("%ld\n", std::max(r - l - 1 - 2 * std::min(-l, r), 0L));}
    }

}
