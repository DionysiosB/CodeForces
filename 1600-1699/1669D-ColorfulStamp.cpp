#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        bool red(0), blue(0), res(true);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'W'){
                if(red ^ blue){res = false;}
                red = 0; blue = 0;
            }
            else if(s[p] == 'R'){red = true;}
            else if(s[p] == 'B'){blue = true;}
        }

        if(red ^ blue){res = false;}
        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
