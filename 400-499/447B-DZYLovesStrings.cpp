#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    std::string initial; getline(std::cin, initial);

    long k; scanf("%ld\n", &k);

    const int N = 26;
    std::vector<long> valueVec(N);

    long highest(0);
    for(int p = 0; p < N; p++){
        scanf("%ld", &valueVec[p]);
        if(valueVec[p] > highest){highest = valueVec[p];}
    }

    long output(0);
    for(int p = 0; p < initial.size(); p++){output += (p + 1) * valueVec[initial[p] - 'a'];}
    for(int p = 0; p < k; p++){output += (p + 1 + initial.size()) * highest;}

    printf("%ld\n", output);

    return 0;
}
