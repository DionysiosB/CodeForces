#include <iostream>
#include <vector>

int main(){

    const int B = 101;
    const int D = 5;
    std::vector<int> count(B + 1, 0);

    int n, k; std::cin >> n >> k;

    for(int p = 0; p < n; p++){
        std::string s; std::cin >> s;
        ++count[s.size()];
    }

    std::string pwd; std::cin >> pwd;

    int prev(0);
    for(int p = 0; p < pwd.size() ; p++){prev += count[p];}
    int cur = prev + count[pwd.size()];
    std::cout << (prev + 1 + (prev / k) * D) << " " << (cur + (cur - 1) / k * D) << std::endl;

    return 0;
}
