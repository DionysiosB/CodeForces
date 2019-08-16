#include <iostream>

int sgn(int64_t x){
    if(x == 0){return 0;}
    else if(x < 0){return -1;}
    else{return 1;}
}

int check(int64_t ways, int64_t num){
    int64_t total(0);
    for(int64_t p = 2; p * p * p <= num; p++){total += (num / (p * p * p));}
    return sgn(total - ways);
}


int main(){

    std::ios_base::sync_with_stdio(false);
    int64_t m; std::cin >> m;
    
    int64_t left(0), right(1e18);
    while(left <= right){
        int64_t mid = (left + right) / 2;
        if(check(m, mid) >= 0){right = mid - 1;}
        else{left = mid + 1;}
    }

    std::cout << ((check(m, left) == 0) ? left : -1) << std::endl;

    return 0;
}
