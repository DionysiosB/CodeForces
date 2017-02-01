#include <cstdio>
#include <iostream>

bool checkStrings(std::string s1, std::string s2){

    if(s1.size() > 0 && s2.size() > 0 && s1 == s2){return true;}
    else if(s1.size() != s2.size()){return false;}
    else if(s1.size() % 2 == 1){return false;}
    int n = s1.size();
    bool check1 =  (checkStrings(s1.substr(0, n/2), s2.substr(0, n/2)) && checkStrings(s1.substr(n/2, n/2), s2.substr(n/2, n/2)));
    if(check1){return true;}
    bool check2 =  (checkStrings(s1.substr(0, n/2), s2.substr(n/2, n/2)) && checkStrings(s1.substr(n/2, n/2), s2.substr(0, n/2)));
    if(check2){return true;}
    return false;
}

int main(){

    std::string str1, str2; getline(std::cin, str1); getline(std::cin, str2);
    if(checkStrings(str1, str2)){puts("YES");}
    else{puts("NO");}

    return 0;
}
