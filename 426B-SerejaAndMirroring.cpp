#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int n(0), m(0); scanf("%d %d\n", &n, &m);

    int output = n;
    std::vector<std::string> rows(n, " ");
    for(int k = 0; k < n; k++){getline(std::cin, rows[k]);}

    bool stop = 0;

    while(output % 2 == 0){
        for(int k = 0; k < output / 2; k++){if(rows[k] != rows[output - 1 - k]){stop = 1; break;}}
        if(!stop){output /= 2;} else{break;}
    }

    std::cout << output << std::endl;

    return 0;
}
