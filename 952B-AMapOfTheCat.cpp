#include <iostream>

int main(){

    for(int p = 0; p < 10; p++){
        std::cout << p << std::endl;
        std::string s; getline(std::cin, s);
        if(s == "no"){continue;}

        if(s == "no way" || s == "don't even" || s == "worse" || s == "go die in a hole" || s == "terrible" || s == "are you serious"){std::cout << "grumpy" << std::endl;}
        else{std::cout << "normal" << std::endl;}
        break;
    }

    return 0;
}
