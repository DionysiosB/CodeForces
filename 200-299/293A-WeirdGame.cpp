#include <cstdio>
#include <iostream>

int main(){

    long n; scanf("%ld\n", &n);

    std::string s; getline(std::cin, s);
    std::string t; getline(std::cin, t);

    long first(0), second(0);
    bool common(0);

    for(int p = 0; p < 2 * n; p++){
        if(s[p] == '1'){++first;}
        if(t[p] == '1'){++second;}
        if(s[p] == '1' && t[p] == '1'){common = 1 - common;}
    }

    if(common){--second;}

    if(first > second){puts("First");}
    else if(first + 1 < second){puts("Second");}
    else{puts("Draw");}

    return 0;
}
