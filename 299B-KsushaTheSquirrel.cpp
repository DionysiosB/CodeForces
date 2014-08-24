#include <cstdio>
#include <iostream>


int main(){

    long roadLength(0), jumpLength(0); scanf("%ld %ld\n", &roadLength, &jumpLength);
    std::string road(""); getline(std::cin, road);

    long counter(0); 
    std::string output("YES");

    for(long k = 0; k < road.length(); k++){
        if(road[k] == '.'){counter = 0;}
        else{++counter; if(counter >= jumpLength){output = "NO"; break;}}
    }

    std::cout << output << std::endl;

    return 0;
}
