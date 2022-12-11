#include <iostream>

int main(){

    std::string path; getline(std::cin, path);
    std::string output; bool flag(0);
    for(int k = 0; k < path.size(); k++){
        if(path[k] != '/' || flag == 0){output += path[k];}
        if(path[k] == '/'){flag = 1;}
        else{flag = 0;}
    }

    if(flag && output.size() > 1){output = output.substr(0, output.size() - 1);}
    std::cout << output << std::endl;

    return 0;
}
