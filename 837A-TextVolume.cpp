#include <cstdio>
#include <iostream>

int main(){

    long n; scanf("%ld\n", &n);
    std::string s; getline(std::cin, s);

    long word(0), text(0);
    for(size_t p = 0; p < s.size(); p++){
        if(s[p] == ' '){text = (text > word) ? text : word; word = 0;}
        else if('A' <= s[p] && s[p] <= 'Z'){++word;}
    }

    text = (text > word) ? text : word;

    std::cout << text << std::endl;

    return 0;
}
