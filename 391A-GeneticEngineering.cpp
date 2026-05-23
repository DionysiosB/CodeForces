#include <cstdio>
#include <iostream>

int main(){

    std::string sequence(""); getline(std::cin, sequence);

    int even = 0;
    int count = 1;

    for(int k = 1; k < sequence.size(); k++){
        if(sequence[k] == sequence[k - 1]){++count;}
        else{
            if(count % 2 == 0){++even;}
            count = 1;
        }
    }
    if(count % 2 == 0){++even;}

    printf("%d\n", even);

    return 0;
}
