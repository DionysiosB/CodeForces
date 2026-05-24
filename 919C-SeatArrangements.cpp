#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m, k; std::cin >> n >> m >> k;
    std::vector<std::string> rm(n);
    for(long p = 0; p < n; p++){std::cin >> rm[p];}

    long total(0);
    for(long row = 0; row < n; row++){
        long cur(0);
        for(long col = 0; col < m; col++){
            if(rm[row][col] == '*'){if(cur >= k){total += cur - k + 1;}; cur = 0;}
            else{++cur;}
        }
        if(cur >= k){total += cur - k + 1;}
    }

    for(long col = 0; col < m; col++){
        long cur(0);
        for(long row = 0; row < n; row++){
            if(rm[row][col] == '*'){if(cur >= k){total += cur - k + 1;}; cur = 0;}
            else{++cur;}
        }
        if(cur >= k){total += cur - k + 1;}
    }

    if(k == 1){total /= 2;}
    printf("%ld\n", total);

    return 0;
}
