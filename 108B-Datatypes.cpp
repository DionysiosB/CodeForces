#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> bits(n, 0);
    for(int p = 0; p < n; p++){scanf("%ld", &bits[p]);}
    sort(bits.begin(), bits.end());

    std::string output = "NO";
    for(int p = 1; p < n; p++){
        if(bits[p - 1] != bits[p] && 2 * bits[p - 1] > bits[p]){output = "YES"; break;}
    }

    std::cout << output << std::endl;

    return 0;
}
