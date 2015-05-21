#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    const int N = 26;
    std::vector<int> small(N,0);
    std::vector<int> large(N,0);

    std::string input; getline(std::cin, input);
    for(int k = 0; k < input.size(); k++){
        if('a' <= input[k] && input[k] <= 'z'){++small[input[k] - 'a'];}
        if('A' <= input[k] && input[k] <= 'Z'){++large[input[k] - 'A'];}
    }

    std::string message; getline(std::cin, message);
    for(int k = 0; k < message.size(); k++){
        if('a' <= message[k] && message[k] <= 'z'){--small[message[k] - 'a'];}
        if('A' <= message[k] && message[k] <= 'Z'){--large[message[k] - 'A'];}
    }

    std::string output = "YES";
    for(int k = 0; k < N; k++){if(small[k] < 0 || large[k] < 0){output = "NO"; break;}}

    std::cout << output << std::endl;

    return 0;
}
