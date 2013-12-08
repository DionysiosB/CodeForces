#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    
    std::string line("");
    std::string shipCaptain("");
    std::vector<std::string> rats;
    std::vector<std::string> womenAndChildren;
    std::vector<std::string> men;

    while(n--){
        getline(std::cin, line);
        int split = line.find(' ');
        std::string name  = line.substr(0,split);
        std::string title = line.substr(split + 1);

        if(title == "captain"){shipCaptain = name;}
        else if(title == "rat"){rats.push_back(name);}
        else if(title == "woman" || title == "child"){womenAndChildren.push_back(name);}
        else{men.push_back(name);}
    }

    for(int k = 0; k < rats.size(); k++){std::cout << rats[k] << std::endl;}
    for(int k = 0; k < womenAndChildren.size(); k++){std::cout << womenAndChildren[k] << std::endl;}
    for(int k = 0; k < men.size(); k++){std::cout << men[k] << std::endl;}
    std::cout << shipCaptain << std::endl;

    return 0;
}
