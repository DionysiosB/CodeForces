#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    const int N = 4;
    std::vector<long> a(N,0); 
    std::vector<long> freq(N, 0);
    for(int k = 0; k < N; k++){scanf("%ld ", &a[k]);}; scanf("\n");
    std::string input; getline(std::cin, input);
    for(int k = 0; k < input.size(); k++){++freq[input[k] - '1'];}

    long total(0);
    for(int k = 0; k < N; k++){total += a[k] * freq[k];}
    std::cout << total << std::endl;

    return 0;
}
