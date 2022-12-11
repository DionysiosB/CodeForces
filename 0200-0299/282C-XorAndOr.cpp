#include <cstdio>
#include <iostream>

int main(){

    std::string a(""), b("");
    getline(std::cin, a);
    getline(std::cin, b);

    std::string output("YES");
    bool flagA(0), flagB(0);

    //Apparently we only need to check if one is not all zeros and the other is;

    if(a.size() != b.size()){output = "NO";}
    else{
        for(int k = 0; k < a.size(); k++){
            if(a[k] == '1'){flagA = 1;}
            if(b[k] == '1'){flagB = 1;}
            if(flagA && flagB){break;}
        }

        if((flagA && !flagB) || (!flagA && flagB)){output = "NO";}
    }

    std::cout << output << std::endl;
    return 0;
}
