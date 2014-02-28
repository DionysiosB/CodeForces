#include <iostream>

int main(){

    std::string line;
    int users(0), total(0);
    while(getline(std::cin, line)){
        if(line[0] == '+'){++users;}
        else if(line[0] == '-'){--users;}
        else{total += users * (line.size() - line.find(':') - 1);}
    }

    std::cout <<  total << std::endl;
    return 0;
}
