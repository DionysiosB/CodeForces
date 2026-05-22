#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

int main(){
    
    const int alphabetLength(26);

    int n(0); scanf("%d\n", &n);
    std::vector<std::string> titles;
    for(size_t k = 0; k < n; k++){
        std::string temp;
        getline(std::cin, temp);
        titles.push_back(temp);
    }
    
    bool done(0);
    std::string final("a");

    for(int k = 0; k < alphabetLength; k++){
        if(done){break;}
        bool found = 0;
        char candidate = 'a' + k;
        for(size_t index = 0; index < n; index++){
            if(found){break;}
            std::string currentTitle = titles[index];
            for(size_t m = 0; m < currentTitle.length(); m++){if(currentTitle[m] == candidate){found = 1; break;}}
        }
        if(!found){final = candidate; done = 1;}
    }

    for(int k = 0; k < alphabetLength; k++){
        for(int m = 0; m < alphabetLength; m++){
            if(done){break;}
            bool found = 0;
            char first = 'a' + k; char second = 'a' + m;
            std::string candidate(""); candidate += first; candidate += second;
            for(size_t index = 0; index < n; index++){std::string currentTitle = titles[index]; if(currentTitle.find(candidate) != std::string::npos){found = 1; break;}}
            if(!found){final = candidate; done = 1;}
        }
    }

    std::cout << final << std::endl;

    return 0;
}
