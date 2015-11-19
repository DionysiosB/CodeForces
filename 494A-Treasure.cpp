#include <cstdio>
#include <iostream>
#include <string>

int main(){

    std::string input; std::cin >> input;

    long counter(0), diff(0), outside(0);
    bool possible(1), lastOpen(0);
    for(long p = 0; p < input.size(); p++){
        if(input[p] == '('){++diff; ++outside;}
        else if(input[p] == ')'){--diff; if(outside > 0){--outside;}}
        else if(input[p] == '#'){++counter; --diff; outside = 0;}

        if(diff < 0){possible = 0; break;}
    }

    if(outside > 0){possible = 0;}

    if(possible){
        for(long p = 0; p < counter - 1; p++){puts("1");}
        printf("%ld\n", 1 + diff);
    }
    else{puts("-1");}

    return 0;
}
