#include <iostream>

int main(){

    long n; std::cin >> n;
    while(n--){
        std::string s; std::cin >> s;
        long v(0), z(0), t(0);
        for(long p = 0; p < s.size(); p++){
            long d = (s[p] - '0');
            t += d;
            if((!d) && (!z)){z = 1;}
            else if(d % 2 == 0){v = 1;}
        }

        bool ans = (z && v && (t % 3 == 0)) || (s == "0");
        std::cout << (ans ? "red" : "cyan") << std::endl;
    }

    return 0;
}
