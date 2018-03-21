#include <iostream>
#include <vector>

int main(){

    const int K = 6;
    int n; std::cin >> n;
    std::vector<std::string> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}

    int k = K;
    for(int p = 0; p < n; p++){
        for(int q = p + 1; q < n; q++){
            int count(0);
            for(int r = 0; r < K; r++){count += (a[p][r] != a[q][r]);}
            int test = (count - 1) / 2;
            k = (k < test) ? k : test;
        }
    }

    std::cout << k << std::endl;

    return 0;
}
