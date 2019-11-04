#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string s; std::cin >> s;

    long cnt(0);
    for(long p = 0; p < n; p++){
        cnt += (s[p] == '(') - (s[p] == ')');
        if(cnt < -1){break;}
    }
    if(cnt != 0){cnt = -2;}

    std::cout << (cnt ? "No" : "Yes") << std::endl;

    return 0;
}
