#include <iostream>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long z(0), a(0);
        for(long p = 0; p < n; p++){
            if(s[p] == '0'){++z;}
            else{break;}
        }
        for(long p = n - 1; p >= 0; p--){
            if(s[p] == '1'){++a;}
            else{break;}
        }

        z += (a + z < n);
        for(long p = 0; p < z; p++){std::cout << '0';}
        for(long p = 0; p < a; p++){std::cout << '1';}
        std::cout << std::endl;
    }

    return 0;
}
