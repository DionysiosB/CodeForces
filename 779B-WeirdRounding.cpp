#include <iostream>

int main(){

    std::string s; int k; std::cin >> s >> k;

    int zeros(0), pos(0);
    for(int p = s.size() - 1; p >= 0; p--){
        if(s[p] == '0'){++zeros;}
        else if(s[p] > '0'){++pos;}
        if(zeros >= k){break;}
    }

    if(zeros >= k){std::cout << pos << std::endl;}
    else{std::cout << (s.size() - 1) << std::endl;}

    return 0;
}
