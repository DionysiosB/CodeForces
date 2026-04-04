#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long z(0), a(0), wz(-1), wa(-1), waa(-1);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '0'){++z; wz = p + 1;}
            else{
                ++a;
                if(wa < 0){wa = p + 1;}
                else{waa = p + 1;}
            }
        }

        if(!a){std::cout << "0";}
        else if(z == 1){std::cout << "1\n" << wz;}
        else if(a == 2){std::cout << "2\n" << wa << " " << waa;}
        else{std::cout << "-1";}
        std::cout << std::endl;
    }

}
