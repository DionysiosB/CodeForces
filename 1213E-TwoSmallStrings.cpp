#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string sa, sb; std::cin >> sa >> sb;
    std::cout << "YES" << std::endl;
    std::string res(3 * n, 'x'); res[0] = 'a';

    for(long p = 1; p < n; p++){
        for(char x = 'a'; x <=  'c'; x++){
            if((res[p - 1] == sa[0] && x == sa[1]) || (res[p - 1] == sb[0] && x == sb[1])){continue;}
            res[p] = x; break;
        }
    }


    


    return 0;
}
