#include <cstdio>
#include <iostream>

int main(){

    int n; scanf("%d\n", &n);
    std::string bits; getline(std::cin, bits);

    int output = 0;

    for(int p = 0; p < bits.size(); p++){
        if(bits[p] == '1'){++output;}
        else{break;}
    }

    if(output < n){++output;}

    printf("%d\n", output);

    return 0;
}
