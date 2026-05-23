#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> array(n);

    for(int p = 0; p < n; p++){scanf("%ld", &array[p]);}

    std::vector<long> left(n); left[0] = 1;
    for(int p = 1; p < n; p++){
        left[p] = (array[p - 1] < array[p]) ? (left[p - 1] + 1) : 1;
    }

    std::vector<long> right(n + 1); right[n - 1] = 1;
    for(int p = n - 2; p >= 0; p--){
        right[p] = (array[p] < array[p + 1]) ? (right[p + 1] + 1) : 1;
    }

    long result = 1;
    if(n > 1){
        result = std::max(1 + left[n - 2], 1 + right[1]);
        for(int p = 1; p < n - 1; p++){
            if(array[p + 1] - array[p - 1] > 1){result = std::max(result, left[p - 1] + right[p + 1] + 1);}
            else{result = std::max(result , std::max(left[p-1] , right[p+1])+1);}
        }
    }

    std::cout << result << std::endl;

    return 0;

}
