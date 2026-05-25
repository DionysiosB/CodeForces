#include <iostream>

int main(){

    std::string s; std::cin >> s;

    bool z(false); long stop(0);
    for(long p = s.size() - 1; p >= 0; p--){
        if(s[p] == ']'){z = true;}
        else if(z && s[p] == ':'){stop = p; break;}
    }

    long start(0), cnt(0);
    z = false;
    for(long p = 0; p < stop; p++){
        if(s[p] == '['){z = true;}
        else if(z && s[p] == ':'){start = p;}
        else if(start && s[p] == '|'){++cnt;}
    }

    printf("%ld\n", start ? (cnt + 4) : -1);

    return 0;
}
