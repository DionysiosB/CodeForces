#include <iostream>

int main(){

    std::string first; getline(std::cin, first);
    std::string second; getline(std::cin, second);

    std::string med(first); 
    for(int p = first.size() - 1; p >= 0; p--){
        if(med[p] == 'z'){med[p] = 'a';}
        else{++med[p]; break;}
    }

    bool possible(0);
    for(int p = 0; p < med.size(); p++){
        if(med[p] < second[p]){possible = 1; break;}
    }

    if(possible){std::cout << med << std::endl;}
    else{std::cout << "No such string" << std::endl;}

    return 0;
}
