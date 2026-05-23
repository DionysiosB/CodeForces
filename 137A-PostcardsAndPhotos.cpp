#include <iostream>
using namespace std;

int main(){
    std::string line; getline(std::cin, line);

    unsigned int index = 0, numTrips = 0, additional = 1;
    char target;
    while(index < line.size()){
        target = line[index];
        additional = 1;
        while(index + additional < line.size() && additional <5 && line[index + additional] == target){++additional;}
        index += additional;
        ++numTrips;
    }
    std::cout << numTrips << std::endl;
    return 0;
}
