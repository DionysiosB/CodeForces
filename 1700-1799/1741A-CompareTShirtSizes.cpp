#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string a, b; std::cin >> a >> b;

        std::string ans("");
        if(a.back() == b.back() && a.size() == b.size()){ans =  "=";}
        else if(a.back() == b.back()){
            if( (a.back() == 'S' && a.size() > b.size()) || (a.back() == 'L' && a.size() < b.size())){ans = "<";}
            else{ans = ">";}
        }
        else{
            if(a.back() == 'L'){ans = ">";}
            else if(b.back() == 'L'){ans = "<";}
            else if(a.back() == 'M'){ans = ">";}
            else if(b.back() == 'M'){ans = "<";}
            else if(a.back() == 'S'){ans = "<";}  //Not needed
            else if(b.back() == 'S'){ans = ">";}  //Not needed
            else{ans = "=";}   //Not needed
        }

        std::cout << ans << std::endl;
    }

}
