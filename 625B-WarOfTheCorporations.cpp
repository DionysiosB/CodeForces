#include <iostream>
#include <string>

int main(){

    std::string s, t; std::cin >> s >> t;
    size_t count(0);
    size_t found(-t.size());
    while(true){
        found = s.find(t, found + t.size());
        if(found == std::string::npos){break;}
        else{++count;}
    }

    std::cout << count << std::endl;

    return 0;
}
