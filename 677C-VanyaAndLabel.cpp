#include <iostream>
#include <vector>

const long long MOD = 1000000007;


int nullBits(char x){

    const int L = 6;
    int a(0);
    if('0' <= x && x <= '9'){a = x - '0';}
    else if('A' <= x && x <= 'Z'){a = x - 'A' + 10;}
    else if('a' <= x && x <= 'z'){a = x - 'a' + 36;}
    else if(x == '-'){a = 62;}
    else if(x == '_'){a = 63;}

    int nb(0);
    for(int p = 0; p < L; p++){
        nb += (a % 2 == 0);
        a /= 2;
    }

    return nb;
}


int main(){

    std::string s; std::cin >> s;
    long long res(1);
    for(long p = 0; p < s.size(); p++){
        int nb = nullBits(s[p]);
        for(int q = 0; q < nb; q++){res *= 3; res %= MOD;}
    }

    std::cout << res << std::endl;

    return 0;
}
