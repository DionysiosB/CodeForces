#include <iostream>
#include <vector>

int main(){

    const int N = 64;

    uint64_t a, b; std::cin >> a >> b;
    std::vector<uint64_t> powers(N);
    std::vector<uint64_t> allOnes(N);
    int64_t x = 1;
    for(int p = 0; p < N; p++){powers[p] = x; x *= 2;}
    x = 0; for(int p = 0; p < N; p++){x = 2 * x + 1; allOnes[p] = x;}


    std::vector<uint64_t> singleZeros;
    for(int p = 0; p < N; p++){
        for(int q = 0; q < N; q++){
            if(allOnes[p] <= 2 * powers[q]){break;}
            singleZeros.push_back(allOnes[p] - powers[q]);
        }
    }

    int count(0);
    for(long p = 0; p < singleZeros.size() ; p++){count += ((singleZeros[p] >= a) && (singleZeros[p] <= b));}
    std::cout << count << std::endl;

    return 0;
}
