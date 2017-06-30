#include <iostream>
#include <vector>

int main(){

    const int N = 10;
    std::vector<int> digits(N);
    digits[0] = 6; digits[1] = 2; digits[2] = 5; digits[3] = 5; digits[4] = 4;
    digits[5] = 5; digits[6] = 6; digits[7] = 3; digits[8] = 7; digits[9] = 6;

    long a, b; std::cin >> a >> b;
    long total(0);
    for(long p = a; p <= b; p++){
        long q = p;
        while(q > 0){total += digits[q % N]; q /= N;}
    }

    std::cout << total << std::endl;

    return 0;
}
