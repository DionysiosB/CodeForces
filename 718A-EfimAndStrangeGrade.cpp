#include <iostream>
#include <vector>

int main(){

    long n, t; std::cin >> n >> t;
    std::string s; std::cin >> s;

    std::vector<int> before;
    std::vector<int> after;
    bool dot(false);

    for(int p = 0; p < s.size(); p++){
        if(s[p] == '.'){dot = true; continue;}
        if(!dot){before.push_back(s[p] - '0');}
        else if(dot){after.push_back(s[p] - '0');}
    }

    int index(0);
    bool incrInt(false);
    for(int p = 0; p < after.size(); p++){if(after[p] >= 5){index = p; break;}}

    while(t--){
        if(after[index] < 5){break;}
        after[index] = 0;
        --index;
        if(index < 0){incrInt = true; break;}
        else{++after[index];}
    }

    for(int p = before.size() - 1; p >= 0; p--){
        if(incrInt){++before[p];}
        if(before[p] > 9){before[p] = 0; incrInt = true;}
        else{incrInt = false; break;}
    }

    if(incrInt){std::cout << "1";}
    for(int p = 0; p < before.size(); p++){std::cout << before[p];}
    if(index >= 0){
        std::cout << ".";
        for(int p = 0; p <= index; p++){std::cout << after[p];}
    }
    std::cout << std::endl;

    return 0;
}
