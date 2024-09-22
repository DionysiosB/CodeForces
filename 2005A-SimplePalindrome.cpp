#include <iostream>
#include <vector>

const std::string s("aeiou");

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<int> v(5, n / 5);
		for (int p = 0; p < n % 5; p++){v[p]++;}
		for (int p = 0; p < 5; p++){for (int q = 0; q < v[p]; q++){std::cout << s[p];}}
        std::cout << std::endl;
    }
}
