#include <cstdio>
#include <iostream>
#include <string>

int main(){

    std::string input; std::cin >> input;

    long counter(0), open(0), close(0);
    bool possible(1);
    for(long p = 0; p < input.size(); p++){
        if(input[p] == '('){++open;}
        else if(input[p] == ')'){++close;}
        else if(input[p] == '#'){++counter; ++close;}

        if(open < close){possible = 0; break;}
    }

    if(possible){
        for(long p = 0; p < counter - 1; p++){puts("1");}
        printf("%ld\n", open - close);
    }
    else{puts("-1");}

    return 0;
}
