#include <iostream>
#include <vector>

int main(){

    std::string s; getline(std::cin, s);
    std::vector<char> stack;
    long total(0);
    for(long p = 0; p < s.size(); p++){
        if(s[p] == '(' || s[p] == '[' || s[p] == '{' || s[p] == '<'){stack.push_back(s[p]);}
        else{
            if(stack.empty()){std::cout << "Impossible" << std::endl; return 0;}
            char lastOpen = stack.back();
            stack.pop_back();
            if((lastOpen == '(' && s[p] != ')') || (lastOpen == '[' && s[p] != ']') ||(lastOpen == '{' && s[p] != '}') ||(lastOpen == '<' && s[p] != '>')){++total;}
        }
    }

    if(!stack.empty()){std::cout << "Impossible" << std::endl;}
    else{std::cout << total << std::endl;}


    return 0;
}
