#include <cstdio>
#include <iostream>

int main(){

    const int divn(3), dive(3), divi(1), divt(1);
    int n(0), e(0), i(0), t(0);

    std::string input; getline(std::cin, input);

    for(int k = 0; k < input.size(); k++){
        if(input[k] == 'n'){++n;}
        else if(input[k] == 'e'){++e;}
        else if(input[k] == 'i'){++i;}
        else if(input[k] == 't'){++t;}
    }

    int min = e/dive;
    if(i/divi < min){min = i/divi;}
    if(t/divt < min){min = t/divt;}
    if((n - 1)/(divn - 1) < min){min = (n - 1)/(divn - 1);}

    std::cout << min << std::endl;

    return 0;
}
