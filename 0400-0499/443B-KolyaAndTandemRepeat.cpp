#include <cstdio>
#include <iostream>

int main(){

    std::string input; getline(std::cin, input);
    int k; std::cin >> k;
    int N = input.size();
    int output(0);

    for(int length = 1; 2 * length <= N + k; length++){
        for(int start = 0; start + 2 * length <= N + k; start++){

            bool possible = 1;
            for(int p = 0; p < length; p++){
                if((start + p >= N) || (start + length + p >= N) || (input[start + p] == input[start + length + p])){continue;}
                else{possible = 0; break;}
            }
            if(possible){output = 2 * length;}
        }
    }

    std::cout << output << std::endl;

    return 0;
}
