#include <iostream>

int main(){

    int64_t n, m, k; std::cin >> n >> m >> k;
    int64_t left(1), right(n * m + 1);
    while(left < right){
        int64_t mid = (left + right) / 2;
        int64_t countSmaller(0);
        for(int64_t row = 1; row <= n; row++){
            int64_t smallerInRow = (m < (mid - 1) / row) ? m : (mid - 1) / row;
            countSmaller += smallerInRow;
        }

        if(countSmaller < k){left = mid + 1;}
        else if(countSmaller >= k){right = mid;}
    }
    
    std::cout << (left - 1) << std::endl;

    return 0;
}
