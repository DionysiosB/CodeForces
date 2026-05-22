#include <iostream>
#include <deque>

int main(){

    std::string line; getline(std::cin, line);
    std::deque<long> order; 

    order.push_back(line.size());

    for(long k = line.size() - 1; k > 0; k--){
        if(line[k - 1] == 'r'){order.push_front(k);}
        else{order.push_back(k);}
    }

    for(int k = 0; k < line.size(); k++){std::cout << order[k] << std::endl;}

    return 0;
}
