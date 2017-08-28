#include <cstdio>
#include <vector>

std::vector<int> dec2Bin(long n){
    std::vector<int> output;
    while(n > 0){output.push_back(n % 2); n /= 2;}
    return output;
}


long readDec(std::vector<int> input){
    long output = 0;
    for(int k = input.size() - 1; k >= 0; k--){output = 10 * output + input[k];}
    return output;
}


int main(){

    const int M = 1024;

    long n; scanf("%ld\n", &n);

    int output = 0;
    while(readDec(dec2Bin(++output)) <= n);

    printf("%d\n", --output);

    return 0;
}
