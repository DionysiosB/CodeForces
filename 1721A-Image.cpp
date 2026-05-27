#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::vector<std::string> sv(2);
        for(long p = 0; p < 2; p++){std::cin >> sv[p];}

        std::vector<long> cv(26, 0);
        long mx(0), two(0);
        for(long p = 0; p < 2; p++){
            for(long q = 0; q < 2; q++){
                long x = sv[p][q] - 'a';
                ++cv[x];
                if(cv[x] == 2){++two;}
                mx = (mx > cv[x]) ? mx : cv[x];
            }
        }

        if(mx == 1){puts("3");}
        else if(mx == 4){puts("0");}
        else if(two == 2 || mx == 3 ){puts("1");}
        else{puts("2");}
    }

}
