#include <iostream>
#include <cstdio>

int main(){
    const int numStates = 3; 
    int state[numStates] = {0};
    
    long n; scanf("%ld\n", &n);
    std::string line; getline(std::cin, line);
    
    for(int k = 0; k < n; k++){
        if(line[k] == 'F'){++state[0];}
        else if(line[k] == 'I'){++state[1];}
        else if(line[k] == 'A'){++state[2];}
    }
    
    long output(0);
    if(state[1] == 0){output = n - state[0];}
    else if(state[1] == 1){output = 1;}
    
    printf("%ld\n", output);
    return 0;
}
