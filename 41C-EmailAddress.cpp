#include <iostream>

int main(){

    std::string s; std::cin >> s;
    std::string t;
    long ind(0);
    bool hasAt(false);
    while(ind < s.size()){
        if((ind > 0) && (ind + 3 < s.size() && s[ind] == 'd' && s[ind + 1] == 'o' && s[ind + 2] == 't')){t += '.'; ind += 3;}
        else if((!hasAt) && (ind > 0) && (ind + 2 < s.size() && s[ind] == 'a' && s[ind + 1] == 't')){t += '@'; hasAt = true; ind += 2;}
        else{t = t + s[ind]; ++ind;}
    }

    std::cout << t << std::endl;

    return 0;
}
