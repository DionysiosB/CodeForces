#include <iostream>
#include <string>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::string s; std::cin >> s;

    std::string left("");
    for(long p = 0; p < s.size(); p++){
        if(left.size() == 0 && s[p] == '0'){continue;}
        if(s[p] == '.'){break;}
        left += s[p];
    }

    std::string right("");
    if(s.find('.') != std::string::npos){
        for(long p = s.size() - 1; p >= 0; p--){
            if(right.size() == 0 && s[p] == '0'){continue;}
            if(s[p] == '.'){break;}
            right += s[p];
        }
        std::reverse(right.begin(), right.end());
    }

    if(left.size() == 0){
        long ind(0); while(right[ind] == '0'){++ind;}
        long exp = -ind - 1;
        std::cout << right[ind];
        if(ind + 1 < right.size()){std::cout << ".";}
        for(long p = ind + 1; p < right.size(); p++){std::cout << right[p];}
        std::cout << "E" << exp << std::endl;
    }
    else{
        std::cout << left[0];
        long ind(left.size() - 1), exp(0);
        while(right.size() == 0 && left[ind] == '0'){++exp; --ind;}
        if(ind > 0 || right.size() > 0){std::cout << ".";}
        for(long p = 1; p <= ind; p++){++exp; std::cout << left[p];}
        for(long p = 0; p < right.size(); p++){std::cout << right[p];}
        if(exp > 0){std::cout << "E" << exp << std::endl;}
    }

    return 0;
}
