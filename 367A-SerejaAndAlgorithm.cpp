#include <cstdio>
#include <iostream>


int main(){

    std::string input; getline(std::cin, input);
    
    long m(0); scanf("%ld", &m);
    while(m--){
        long start(0), end(0); scanf("%ld %ld", &start, &end);
        long numX(0), numY(0), numZ(0);
        for(long k = start - 1; k < end; k++){
            std::cout 
            if(input[k] == 'x'){++numX;}
            else if(input[k] == 'y'){++numY;}
            else if(input[k] == 'z'){++numZ;}
        }
        long common = std::min(numX, std::min(numY, numZ));
        if(numX + numY + numZ - 3 * common <= 2){puts("YES");}
        else{puts("NO");}
    }
    return 0;
}
